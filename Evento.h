#include "Asistente.cpp"

class Evento {
private:
    string tipoEvento;
    int duracion;
    string ubicacion;
    string tema;
    vector<Asistente*> asistentesRegistrados;

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
    void agregarAsistente(Asistente* asistente);
    int obtenerCantidadAsistentes();
    vector<Asistente *> getAsistentesPresentes();
};


