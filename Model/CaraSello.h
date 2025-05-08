//
// Created by Lenovo on 7/05/2025.
//

#ifndef CARASELLO_H
#define CARASELLO_H

#include "Juego.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

class CaraSello : public Juego {

protected:

    float calcularResultado(float gonzosApostar) override;

public:
    CaraSello();  // Inicializa la semilla para rand()

    float jugar(float gonzosApostar) override;
    void mostrarReglas() override;

    ~CaraSello() override = default; // Hace que se defina un constuctor por defecto

};

#endif //CARASELLO_H


