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
#include "SW_object.h"
using namespace std;

int main(){

Personaje Obi = Personaje("Obi-Wan Kenobi", "57 BBY", "Republic", "Human", "Stewjon", "Male");
string obi_name = Obi.get_nombre();
cout << obi_name;
}