#pragma once
#include <iostream>
using namespace std;

class Asistente{
    private:
        string tipoAsistente;
        string nombre;
        int edad;
        string ocupacion;
        string empresa; 
    public:
        Asistente(string tipoAsistente,string nombre, int edad, string ocupacion, string empresa);
        string getTipoAsistente();
        void setTipoAsistente(string);
        string getNombre();
        void setNombre(string);
        int getEdad();
        void setEdad(int);
        string getOcupacion();
        void setOcupacion(string);
        string getEmpresa();
        void setEmpresa(string);

};  