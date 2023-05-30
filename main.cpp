/*
 * Proyecto Juego eliminador de Star Wars
 * Jesús Alejandro Cedillo Zertuche
 * A01705442
 * 16/06/2023
 */

/*
 * Este es un proyecto para la clase de Programación
 * Computacional Orientado a Objetos. Es un programa donde el usuario
 * puede jugar a clasificar objetos del mundo de Star Wars, de forma 
 * que elija el mejor objeto (personaje, arma o planeta) que le parezca
 */

// Biblotecas
#include <iostream>
#include "Game.h"
using namespace std;


void pers(){
    Game juego;
    juego.agrega_personajes();
    juego.agrega_planetas();
    juego.agrega_weapons();
    juego.imprimir();
}

// Procedimiento menu
void menu(){
    /* Imprimir el menu */
    cout << "\nMenu:\n";
    cout << "1. Jugar con Personajes.\n";
    cout << "2. Jugar con Armas.\n";
    cout << "3. Jugar con Planetas.\n";
    cout << "4. Consultar todos los datos de un Personaje.\n";
    cout << "5. Consultar todos los datos de un Arma.\n";
    cout << "6. Consultar todos los datos de un Planeta. \n";
    cout << "7. Salir.\n\n";
}

int main(){

    cout << "\n¡Bienvenido al juego de Eliminación de Star Wars©! Comenzemos!!\n";

    pers();

    // Se asgina un valor inicial a opción para que entre al ciclo
    int opcion = 1;

    // Ciclo para que solo corra con ciertas opciones
    while (opcion >= 1 && opcion <= 6){
        // Imprimir el menu
        menu();
        cout << "Opción: ";
        // Tomar el input del usuario
        cin >> opcion;
        
        // En base al input sigue un procedimiento
        switch (opcion){
            // Caso 1 con el que se juega con Personajes
            case 1: {
                break;
            }
            // Caso 2 con el que se juega con Armas
            case 2:
                break;

            // Caso 3 con el que se juega con Planetas
            case 3: 
                break;
            
            // Caso 4 que imprime información de cierto Personaje
            case 4: 
                break;

            // Caso 5 que imprime información de cierta Arma
            case 5: {
                break;
            }

            // Caso 6 que imprime información de cierto Planeta
            case 6: {
                break;
            }
        }
    }

    cout << "Gracias por usar el programa!!! \n";

    return 0;

}