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
#include <random>
#include "Game.h"
using namespace std;

// Procedimiento menu
void menu_inicial(){
    /* Imprimir el menu */
    cout << "\nMenu:\n";
    cout << "1. Jugar con Personajes.\n";
    cout << "2. Jugar con Armas.\n";
    cout << "3. Jugar con Planetas.\n";
    cout << "4. Jugar con Personajes y Planetas. \n\n";
}

int main(){

    cout << "\n¡Bienvenido al juego de Eliminación de Star Wars©! Comencemos!!\n";

    /* Crear el objeto del juego con la lista vacía. 
     * dependiendo del tipo de juego, se carga con diferentes
     * objetos y funciones.
    */
    Game juego;

    // Se asgina un valor inicial a opción para que entre al ciclo
    int opcion = 5;

    // Ciclo para que se repita hasta que el usuario eliga opción válida
    while (opcion > 4 || opcion < 1){
        // Imprimir el menu
        menu_inicial();
        cout << "Por favor solo escribe números. Opción: ";
        // Tomar el input del usuario
        cin >> opcion;
        
        // En base al input sigue un procedimiento
        switch (opcion){
            // Caso 1 con el que se juega con Personajes
            case 1: {
                juego.agrega_personajes();
                break;
            }
            // Caso 2 con el que se juega con Armas
            case 2: {
                juego.agrega_weapons();
                break;
            }
            // Caso 3 con el que se juega con Planetas
            case 3: {
                juego.agrega_planetas();
                break;
            }
            // Caso 4 que juega con personajes y planetas
            case 4: {
                juego.agrega_personajes();
                juego.agrega_planetas();
                break;
            }
        }
    }

    cout << endl << "Perfecto, gracias por su elección!" << endl << endl;
    
    // Se manda a llamar la función base del código
    juego.juego_eliminacion();
    cout << "¡¡Que bien!! Tu selección es: " << endl;
    juego.imprimir();

    cout << endl << "Gracias por usar el programa!!! \n" << endl;
    return 0;
}