#ifndef DOMO_H
#define DOMO_H

#include <string>
#include "Colono.h"

namespace ColonizacionEspacial {

    enum class TipoDomo { Laboratorio, Ingenieria, Habitat };

    class Domo {
    private:
        int codigo;
        TipoDomo tipo;
        double capacidadOxigeno;
        int maxOcupantes;
        Colono** colonos; 
        int cantidadColonos;
        bool sellado;

    public:
        Domo(int codigo, TipoDomo tipo, double capacidadOxigeno, int maxOcupantes);
        ~Domo();

        bool admitirColono(Colono* colono);
        bool retirarColono(int idColono);
        void evacuarForzoso();

        double calcularRatioOxigeno() const;
        void estadoVital() const;

        bool estaSellado() const;
        void sellar();
    };

} 

#endif DOMO_H