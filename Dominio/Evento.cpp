#include "Evento.h"
#include "Asistente.h"
#include <vector>
using namespace std;

Evento::Evento(string tipoEvento, int duracion, string ubicacion, string tema) {
    this->tipoEvento = tipoEvento;
    this->duracion = duracion;
    this->ubicacion = ubicacion;
    this->tema = tema;
}
string Evento::getTipoEvento() {
    return tipoEvento;
}

void Evento::setTipoEvento(string tipoEvento) {
    this->tipoEvento = tipoEvento;
}

int Evento::getDuracion() {
    return duracion;
}

void Evento::setDuracion(int duracion) {
    this->duracion = duracion;
}

string Evento::getUbicacion() {
    return ubicacion;
}

void Evento::setUbicacion(string ubicacion) {
    this->ubicacion = ubicacion;
}

string Evento::getTema() {
    return tema;
}

void Evento::setTema(string tema) {
    this->tema = tema;
}
void Evento::agregarAsistente(Asistente asistente){
     if (asistentesPresentes.size() <= 100) {
        asistentesPresentes.push_back(asistente);
    } else {
        cout << "La lista del evento ya esta llena." << endl;
    }
}


vector<Asistente> getAsistentesPresentes(){

}
