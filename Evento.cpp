#include "Evento.h"

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
vector<Asistente*> Evento::getAsistentesPresentes()
{
    return asistentesRegistrados;
}
void Evento::agregarAsistente(Asistente *asistente)
{
    if (asistentesRegistrados.size() <= 50 )
    {
        asistentesRegistrados.push_back(asistente);
    } else {
        cout << "La lista del evento ya esta llena." << endl;
    }
}
int Evento::obtenerCantidadAsistentes() {
        return asistentesRegistrados.size();
    }
