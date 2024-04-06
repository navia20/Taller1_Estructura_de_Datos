#include <iostream>
#include <fstream>
#include "Sistema/Sistema.h"

using namespace std;

// Declaración de funciones
void leerArchivo(const char* nombreArchivo);

Sistema sistema = Sistema();

int main(){
    sistema.menu();
    return 0;
}

void leerArchivo(const char* nombreArchivo){
    ifstream arch(nombreArchivo);
    if (!arch.is_open()) {
        cerr << "Error al abrir el archivo " << nombreArchivo << endl;
        return;
    }
    string linea;
}