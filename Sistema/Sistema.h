#pragma once
#include <iostream>
#include "../Dominio/Asistente.h"
#include "../Dominio/Evento.h"
#include <vector>
using namespace std;

class Sistema{
    private:
        vector<Asistente*> listaAsistentes;
        vector<Evento*> listaEvento;
        
    public:
        Sistema() =default;
        void agregarAsistente(Asistente* asistente);
        void agregarEvento(Evento* evento);
        void generarInformeEventosProgramados();
        void generarInformeAsistentesPorEvento();
        void generarEstadisticasAsistenciaEventos();
        void generarDetallesAsistentes();
        void obtenerInformacionEvento(Evento* evento);
};