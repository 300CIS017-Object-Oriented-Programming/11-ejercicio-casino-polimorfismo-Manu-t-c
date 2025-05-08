//
// Created by lufe0 on 8/05/2021.
//

#include "DosColores.h"

void DosColores::mostrarReglas() {
    cout << "--------------------------Reglas Dos Colores-------------------------" << endl;
    cout << "1) El jugador elige un color: Blanco o Negro." << endl;
    cout << "2) El jugador lanza un dado (de 6 caras)." << endl;
    cout << "3) El casino tambien lanza un dado y elige un color al azar." << endl;
    cout << "4) Resultado del juego:" << endl;
    cout << "   - Si el numero y el color coinciden: gana 4x lo apostado." << endl;
    cout << "   - Si solo el numero coincide: gana 0.5 por lo apostado." << endl;
    cout << "   - Si solo el color coincide: no gana ni pierde." << endl;
    cout << "   - Si no coincide nada: pierde todo lo apostado." << endl;
    cout << "----------------------------------------------------------------------" << endl;
}

float DosColores::jugar(float gonzosApostar) {
    mostrarReglas();
    float gonzosResultado;
    srand(time(nullptr));
    int numMaxRandom = 7;
    int numMinRandom = 1;
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    numeroCasino = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    colorCasino = rand() % 2; // Numero entre 0 y 1
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Elije un color: " << endl;
    cout << "1. Blanco" << endl;
    cout << "2. Negro" << endl;
    cin >> colorJugador;
    --colorJugador; // Se ajusta el valor del color
    cout << "Numero casino: " << numeroCasino << endl;
    cout << "Color casino: ";
    if (colorCasino == 0) {
        cout << "Blanco." << endl;
    } else {
        cout << "Negro." << endl;
    }
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float DosColores::calcularResultado(float gonzosApostar) {
    float lowestResult = 0;
    float maxResult = 4;
    float midResult = 1.5;

    // Si coincide tanto el valor del dado como el color, el usuario ganará 4 veces lo apostado
    if (numeroJugador == numeroCasino && colorJugador == colorCasino) {
        return maxResult * gonzosApostar;
    }
        // coincide sólo con el valor del dado ganará 0.5 veces lo apostado
    else if (numeroJugador == numeroCasino) {
        return midResult * gonzosApostar;
    }
        // no gana ni pierde
    else if (colorJugador == colorCasino) {
        return gonzosApostar;
    }
        // pierde lo apostado
    else {
        return lowestResult;
    }
}


/* Como el constructor se definio por defecto no hay que poner constructo vacio
DosColores::~DosColores() {

}
*/