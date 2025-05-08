//
// Created by Lenovo on 7/05/2025.
//

#include "CaraSello.h"
#include <iostream>
#include <cstdlib>

void CaraSello::mostrarReglas() {
    cout << "-------------------- Reglas de Cara o Sello -------------------" << endl;
    cout << "1. Elige entre Cara (1) o Sello (0)." << endl;
    cout << "2. Se lanza una moneda al azar." << endl;
    cout << "3. Si acertaste tu eleccion, ganas el doble de lo apostado." << endl;
    cout << "4. Si te equivocaste, pierdes lo apostado." << endl;
    cout << "-------------------------------------------------------------" << endl;
}

CaraSello::CaraSello() {
    srand(time(0));  // Inicializa la semilla para rand() (esto debería hacerse una vez)
}

float CaraSello::jugar(float gonzosApostar) {
    mostrarReglas();  // Mostrar las reglas al comenzar

    int moneda = rand() % 2;

    int eleccion;
    cout << "Elige 0 para Sello o 1 para Cara: ";
    cin >> eleccion;

   string resultado;
    if (moneda == 1) {
        resultado = "Cara";
    } else {
        resultado = "Sello";
    }

    cout << "Salio: " << resultado << endl;

    if (eleccion == moneda) {
    cout << "¡Ganaste!" <<endl;
        return gonzosApostar * 2;
    } else {
        cout << "Perdiste." << endl;
        return calcularResultado(gonzosApostar);
    }
}


float CaraSello::calcularResultado(float gonzosApostar) {
    // Aquí puedes poner la misma lógica de `jugar`, o agregar cualquier otro comportamiento para calcular el resultado.
    // Por ejemplo:
    int resultadoMoneda = rand() % 2; // 0: Sello, 1: Cara
    return (resultadoMoneda == 1) ? gonzosApostar * 2 : -gonzosApostar;
}



