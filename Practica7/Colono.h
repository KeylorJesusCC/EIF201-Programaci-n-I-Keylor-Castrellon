#ifndef COLONO_H
#define COLONO_H

#include <string>

namespace ColonizacionEspacial {

    enum class Especialidad { Ingeniero, Biologo, Medico, Geologo, Piloto };

    class Colono {
    private:
        int id;
        std::string nombre;
        Especialidad especialidad;
        double consumoOxigeno;
        int productividad;

    public:
        Colono(int id, const std::string& nombre, Especialidad especialidad,
            double consumoOxigeno, int productividad);
        ~Colono();

        int getId() const;
        std::string getNombre() const;
        Especialidad getEspecialidad() const;
        double getConsumoOxigeno() const;
        int getProductividad() const;
    };

}

#endif COLONO_H
