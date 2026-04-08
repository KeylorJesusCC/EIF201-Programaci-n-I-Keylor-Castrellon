#include "Colono.h"
#include <iostream>

namespace ColonizacionEspacial {

    Colono::Colono(int id, const std::string& nombre, Especialidad especialidad,
        double consumoOxigeno, int productividad)
        : id(id), nombre(nombre), especialidad(especialidad),
        consumoOxigeno(consumoOxigeno), productividad(productividad) {
    }

    Colono::~Colono() {
        std::cout << "Colono " << nombre << " destruido.";
    }

    int Colono::getId() const {
        return id;
    }

    std::string Colono::getNombre() const {
        return nombre;
    }

    Especialidad Colono::getEspecialidad() const {
        return especialidad;
    }

    double Colono::getConsumoOxigeno() const {
        return consumoOxigeno;
    }

    int Colono::getProductividad() const {
        return productividad;
    }

}