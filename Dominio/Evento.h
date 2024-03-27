#pragma once
#include <iostream>
using namespace std;

class Evento {
private:
    string tipoEvento;
    int duracion;
    string ubicacion;
    string tema;
public:
    Evento(string tipoEvento, int duracion, string ubicacion, string tema);
    string getTipoEvento();
    void setTipoEvento(string);
    int getDuracion(); 
    void setDuracion(int); 
    string getUbicacion();
    void setUbicacion(string);
    string getTema();
    void setTema(string);
};

 
