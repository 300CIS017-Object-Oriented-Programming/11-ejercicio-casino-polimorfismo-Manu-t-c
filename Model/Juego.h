//
// Created by lufe0 on 7/05/2021.
//

#ifndef CASINO_JUEGO_H
#define CASINO_JUEGO_H

#include "Jugador.h"

class Juego {
protected:
    int numeroCasino;
    int numeroJugador;

    virtual float calcularResultado(float gonzosApostar) = 0;

public:
    Juego() = default;

    virtual float jugar(float gonzosApostar) = 0;

    virtual void mostrarReglas() = 0; // Es declarado el metodo de mostrar reglas en juego para que este pueda ser utilizado en los juegos futuros y en los actuales

    virtual ~Juego() = default;
};

#endif //CASINO_JUEGO_H
