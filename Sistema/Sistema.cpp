#include "Sistema.h"
#include <iostream>
#include "../Dominio/Asistente.h"
#include "../Dominio/Evento.h"
#include <vector>
#include <istream>
#include <string>
using namespace std;

void Sistema::print(string text)    
{
	cout << text << endl;
}
void Sistema::alarm(string text)
{
	if (text != "") { 
		cout << "\n" + text << endl; 
	}

	cout << "Presione [Enter] para continuar..."; 

	string placeholder; 
	getline(cin, placeholder); 
}


void Sistema::cleanConsole()
{
	for (int i = 0; i < 100; i++) { 
		print("");
	}
}
string Sistema::StringInput(string text)
{
	string entrada; 
	cout << text; 
	getline(cin, entrada); 

	while (entrada == "") { 
		cout << text; 
		getline(cin, entrada); 
	}

	return entrada; 
}

int Sistema::IntInput(string text){
	bool entradaEsDigito = false;
	string entrada = StringInput(text); 
	
	while (!entradaEsDigito) { 
		entradaEsDigito = true;

		for (char const& ch : entrada) { 
			if (!isdigit(ch)) { 
				entrada = StringInput("Valor invalido. " + text); 
				entradaEsDigito = false;
				break; 
		}
	}
	
	return stoi(entrada); 
    }
}
bool Sistema::BoolInput(string text)
{
	bool entradaValida = false; 
	string entrada = StringInput(text); 

	while (!entradaValida) { 
		entradaValida = true;
		if (entrada == "Si")
		{
			return true;
		}
		else if (entrada == "No")
		{
			return false;
		}
		else
		{   
			entrada = StringInput("Valor invalido. ");
			entradaValida = false; 
		}
	}
}
void Sistema::registrarAsistente(Evento* evento){
    string tipoAsistente = StringInput("Ingrese tipo de Asistente: ");
    string nombre = StringInput("Ingrese nombre del Asistente: ");
    int edad = IntInput("Ingrese edad del Asistente: ");    

    while (edad < 17) {
        cout << "Error. Los asistentes no pueden ser menores de edad." << endl;
        edad = IntInput("Ingrese edad del Asistente: ");
    }
	string ocupacion = StringInput("Ingrese ocupacion del Asistente: ");
    string empresa = StringInput("Ingrese empresa del Asistente: ");

    Asistente* nuevoAsistente = new Asistente(tipoAsistente, nombre, edad, ocupacion, empresa);
    listaAsistentes.push_back(nuevoAsistente);
	evento->agregarAsistente(nuevoAsistente);
    cout << "Se ha registrado un nuevo asistente con éxito" << endl;
}

void Sistema::crearEvento(){
    string tipoEvento = StringInput("Ingrese tipo de Evento: ");
    int duracion = IntInput("Ingrese duracion del Evento (en horas): ");
    string ubicacion = StringInput("Ingrese ubicacion del Evento: ");
    string tema = StringInput("Ingrese tema del Evento: ");
    Evento* nuevoEvento = new Evento(tipoEvento, duracion, ubicacion, tema);
    listaEventos.push_back(nuevoEvento);
    cout << "Se ha registrado un nuevo evento con éxito" << endl;
 
    if (BoolInput("¿Desea agregar asistentes a este evento? (Si/No): ")) {
            registrarAsistente(nuevoEvento);
        }
    }

void Sistema::consultarListaAsistentes() {
    cout << "------------------------" << endl;    
	for (Asistente* asistente : listaAsistentes) {
        cout << "Tipo: " << asistente->getTipoAsistente() << endl;
        cout << "Nombre: " << asistente->getNombre() << endl;
        cout << "Edad: " << asistente->getEdad()<<" años"<< endl;
        cout << "Ocupación: " << asistente->getOcupacion() << endl;
        cout << "Empresa: " << asistente->getEmpresa() << endl;
        cout << "------------------------" << endl;
    }
}
void Sistema::consultarListaEventos() {
    cout << "------------------------" << endl;
	for (Evento* evento : listaEventos) {
        cout << "Tipo de Evento: " << evento->getTipoEvento() << endl;
        cout << "Tema: " << evento->getTema() << endl;
		cout << "------------------------" << endl;
	}

}
void Sistema::registrarAsistenteEventoExistente() {
    int contador = 1; 
    cout << "Lista de Eventos:" << endl;
    for (Evento* evento : listaEventos) {
        cout << "Evento " << contador << ":" << endl;
        cout << "Tema: " << evento->getTema() << endl;
        cout << "------------------------" << endl;
        contador++; 
		int indice =IntInput("Ingrese el numero de Evento por Seleccionar:")-1;
		registrarAsistente(listaEventos[indice]);
    }
}

void Sistema::numeroTotaldeAsistentes(){
	int total= 0;
	for(Evento* evento: listaEventos){
		total = total + evento->obtenerCantidadAsistentes();
	}
	cout << "Numero total de Asistentes Registrados: " << total << endl; 
}

void Sistema::promedioAsistentesEvento(){
	int total= 0;
	for(Evento* evento: listaEventos){
		total = total + evento->obtenerCantidadAsistentes();
	}
	int contador = 1; 
    cout << "Lista de Eventos:" << endl;
    for (Evento* evento : listaEventos) {
        cout << "Evento " << contador << ":" << endl;
        cout << "Tema: " << evento->getTema() << endl;
        cout << "------------------------" << endl;
        contador++; 	
	}
		int indice =IntInput("Ingrese el numero de Evento por Seleccionar:")-1;
		int totalEvento = listaEventos[indice]->obtenerCantidadAsistentes();
		cout << "Promedio Asistente del Evento: %" << (totalEvento/total)*100 << endl;
}

void Sistema::menu(){
	cout << "---Menu---" << endl;
    cout << "1) Crear evento" << endl;
    cout << "2) Registrar Asistente" << endl;
    cout << "3) Generar Informes" << endl;
    cout << "4) Salir" << endl;

    int option = IntInput("Seleccione opcion:");
    switch (option) {
        case 1:
            crearEvento();
            break;
        case 2:
            registrarAsistenteEventoExistente();
            break;
        case 3:
            informes();
            break;
    }
}
void Sistema::informes(){
	cout << "---Informes---" << endl;
    cout << "1) Lista de Eventos" << endl;
    cout << "2) Lista de Asistentes Registrados" << endl;
    cout << "3) Estadisticas sobre la asistencia a los eventos" << endl;
    cout << "4) Detalles sobre los asistentes" << endl;

    int option = IntInput("Seleccione opcion:");
    switch (option) {
        case 1:
            consultarListaEventos();
            break;
        case 2:
         	consultarListaAsistentes();
            break;
        case 3:
            numeroTotaldeAsistentes();
            promedioAsistentesEvento();
            break;
}
}
