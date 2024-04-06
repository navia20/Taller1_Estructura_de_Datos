#include "Sistema.cpp"

int main(){
    Sistema* sistema =  new Sistema();
    sistema->menu();
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