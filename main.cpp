#include <iostream>
#include <fstream>
#include "Sistema/Sistema.h"

using namespace std;

Sistema sistema = Sistema();
int main(){
    
    
}
void leerArchivo(const char* nombreArchivo){
    ifstream arch(nombreArchivo);
    if (!arch.is_open()) {
        cerr << "Error al abrir el archivo " << nombreArchivo << endl;
        return;
    }
    string linea;

}
    
