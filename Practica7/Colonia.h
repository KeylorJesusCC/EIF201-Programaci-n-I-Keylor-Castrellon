#ifndef COLONIA_H
#define COLONIA_H

#include <string>
#include "Domo.h"

namespace ColonizacionEspacial {

    class Colonia {
    private:
        std::string nombre;
        std::string planeta;
        Domo* domos;      
        int cantidadDomos; 

    public:
        Colonia(const std::string& nombre, const std::string& planeta, int cantidadDomos);
        ~Colonia();

        void construirDomos();
        void destruirDomos();

        bool asignarColonoInteligente(Colono* colono);
        void evacuarDomo(int codigoDomo);
        void rebalancearColonia();

        Colono* buscarColono(int id);
        void reporteProductividad();
        void estadisticasGlobales();
    };

} 

#endif COLONIA_H