#include "Evento.cpp"

class Sistema{
    private:
        vector<Asistente*> listaAsistentes;
        vector<Evento*> listaEventos;
        void print(string text);
        void alarm(string text); 
        void cleanConsole(); 
        int IntInput(string texto); 
        string StringInput(string text);
        bool BoolInput(string texto);
        void registrarAsistente(Evento* evento);
        void crearEvento();
        void consultarListaAsistentes();
        void consultarListaEventos();
        void registrarAsistenteEventoExistente();
        void numeroTotaldeAsistentes();
        void promedioAsistentesEvento();
        void edadPromedio();
        void informes();
        
    public:
        Sistema();
        void menu();
};