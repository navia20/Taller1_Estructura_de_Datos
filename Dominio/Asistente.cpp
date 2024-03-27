#include "Asistente.h"
using namespace std;

Asistente::Asistente(string tipoAsistente, string nombre, int edad, string ocupacion, string empresa) {
    this->tipoAsistente = tipoAsistente;
    this->nombre = nombre;
    this->edad = edad;
    this->ocupacion = ocupacion;
    this->empresa = empresa;
}
string Asistente::getTipoAsistente() {
    return tipoAsistente;
}
void Asistente::setTipoAsistente(string tipoAsistente) {
    this->tipoAsistente = tipoAsistente;
}
string Asistente::getNombre() {
    return nombre;
}
void Asistente::setNombre(string nombre) {
    this->nombre = nombre;
}
int Asistente::getEdad() {
    return edad;
}
void Asistente::setEdad(int edad) {
    this->edad=edad;
}
string Asistente::getOcupacion() {
    return ocupacion;
}
void Asistente::setOcupacion(string ocupacion) {
    this->ocupacion = ocupacion;
}
string Asistente::getEmpresa() {
    return empresa;
}
void Asistente::setEmpresa(string empresa) {
    this->empresa = empresa;
}