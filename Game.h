/*
 * Proyecto Juego eliminador de Star Wars
 * Jesús Alejandro Cedillo Zertuche
 * A01705442
 * 16/06/2023
 */

/*
 * Esta clase contiene el juego en sí, con todas las funciones necesarias 
 * para hacer la eliminatioria y ver quién es el mejor de Planetas/Personajes o
 * Weapons. Está clase se usa en el main y es la principal función del programa
 */

#ifndef GAME_H
#define GAME_H
#include "SW_object.h"
#include <iostream>

using namespace std;

class Game {
    // Atributos de la clase
    private:
    SW_object * Star_wars[100]; // Se define la lista de apuntadores de clase SW_object para usar polimorfismo
    int num_obj;

    public:
    // Constructor por default
    Game(): num_obj(0){}

    // Métodos de la clase
    void agrega_personajes();
    void agrega_weapons();
    void agrega_planetas();
    void imprimir();
};

/**
 * agrega_personajes genera objetos en Star_Wars[]
 *
 * genera objetos de tipo Personaje y los guarda en Star_Wars[] 
 * (arreglo de objetos) para hacer el juego
 * @param None
 * @return
 */
void Game :: agrega_personajes(){
    
    // Crea todos los personajes en tiempo de ejecución para usar polimorfismo
    Star_wars[num_obj] = new Personaje("Obi-Wan Kenobi", "57 BBY", "Republic/Jedi", "Human", "Stewjon", "Masculino", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Anakin Skywalker", "41 BBY", "Republic", "Human", "Tattoine", "Masculino", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Ahoska", "36 BBY", "Republic/Jedi/Citizen", "Togruta", "Shili", "Femenino", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Plo Koon", "Desconocido", "Republic", "Kel Dor", "Dorin", "Masculino", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Count Dooku", "102 BBY", "Separatist/Sith", "Human", "Serenno", "Masculino", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Yoda", "896 BBY", "Republic/Jedi", "Desconocido", "Desconocido", "Male", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Captain Rex", "32 BBY", "Republic/Rebellion", "Human clone", "Kamino", "Male", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Emperador", "84 BBY", "Sith/Separatist/Empire/Republic", "Human", "Naboo", "Male", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Darth Vader", "19 BBY", "Empire/Sith", "Burnt human", "Coruscant", "Male", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("R2-D2", "32 BBY", "Republic/Rebellion", "R2 astromech droid", "Naboo", "Masculine programming", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Grievous", "Desconocido", "Separatist", "Kaleesh", "Kalee", "Male", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Din Djarin", "Antes de 19 BBY", "Mandalorians", "Human", "Aq Vetina", "Male", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Darth Maul", "54 BBY", "Sith/Trade Federation", "Zabrak", "Dathomir", "Male", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Mace Windu", "72 BBY", "Republic/Jedi", "Human", "Haruun Kal", "Male", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Qui-Gon Jinn", "80 BBY", "Republic/Jedi", "Human", "Coruscant", "Male", 1);
    num_obj++;
    Star_wars[num_obj] = new Personaje("Boba Fett", "32 BBY", "Bounty Hunters Guild", "Human Clone", "Kamino", "Male", 1);
    num_obj++;
}

/**
 * agrega_weapons genera objetos en Star_Wars[]
 *
 * genera objetos de tipo Weapons y los guarda en Star_Wars[] 
 * (arreglo de objetos) para hacer el juego
 * @param None
 * @return
 */
void Game :: agrega_weapons(){

    // Crea todas las armas en tiempo de ejecución para usar polimorfismo
    Star_wars[num_obj] = new Weapons("Lightsaber", "Jedi/Sith/Grievous", 300000, "Kyber Cyrstal, Metallic Hilt", 2);
    num_obj++;
    Star_wars[num_obj] = new Weapons("Ion Blaster", "Jawas/Clones vs. Droids", 800, "Ion energy, Metal", 2);
    num_obj++;
    Star_wars[num_obj] = new Weapons("Blaster", "Clones/Stromtroopers/Rebels", 500, "Plasma energy, Metal", 2);
    num_obj++;
    Star_wars[num_obj] = new Weapons("Seismic Charge", "Jango/Boba Fett", 10000, "Metal, Sound turned into energy", 2);
    num_obj++;
    Star_wars[num_obj] = new Weapons("BT X-42 Heavy Flame Projector", "Clones/Mandalorian commandos", 2000, "Metal, Flame creator", 2);
    num_obj++;
    Star_wars[num_obj] = new Weapons("Wrist Rocket Launcher", "Bounty hunters", 2500, "Metal, Rockets", 2);
    num_obj++;
    Star_wars[num_obj] = new Weapons("Missile Launcher", "Clones/Stormstroopers/Bounty hunters", 1500, "Metal, Missiles", 2);
    num_obj++;
    Star_wars[num_obj] = new Weapons("Force Pike", "Republic/Empire", 500, "Grahphite", 2);
    num_obj++;
}

/**
 * agrega_planetas genera objetos en Star_Wars[]
 *
 * genera objetos de tipo Planeta y los guarda en Star_Wars[] 
 * (arreglo de objetos) para hacer el juego
 * @param None
 * @return
 */
void Game :: agrega_planetas(){

    // Creas todos los planetas en tiempo de ejecución para usar polimorfismo
    Star_wars[num_obj] = new Planeta("Kamino", "Republica/Kaminoan Government", "Far Outer Rim/Unknown Territories", 1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Tatooine", "Hutt Clan/Empire", "Outer Rim", 1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Naboo", "Republic/Royal House of Naboo", "Mid Rim", 1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Coruscant", "Republic/Empire", "Core Worlds", 1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Mustafar", "Sith/Separatist","Outer Rim", 1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Alderaan", "Republic/Rebellion", "Core Worlds", 1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Geonosis", "Geonosians/Separatists", "Outer Rim" ,1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Mandalore", "Mandalorians", "Outer Rim", 1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Dorin", "Republic/Empire", "Expansion Region", 0, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Hoth", "Rebellion base", "Outer Rim", 1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Kashyyyk", "Wookies/Republic", "Mid Rim", 1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Ryloth", "Republic/Free Ryloth", "Outer Rim", 1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Dathomir", "Sith/Nightsisters", "Outer Rim", 1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Serenno", "Separatists/Empire", "Outer Rim", 1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Hosnian Prime", "Republic/Empire", "Core Worlds", 1, 3);
    num_obj++;
    Star_wars[num_obj] = new Planeta("Raxus", "Separatists/Empire", "Outer Rim", 1, 3);
    num_obj++;
}

/**
 * imprimir imprime todos los objetos de una lista
 *
 * Imprime todas las características que hay en cada objeto
 * que se encuentra en la lista. Funciona si la lista tiene diferente tipo
 * de objeto, o si el objeto es el mismo
 * @param None
 * @return
 */
void Game :: imprimir(){

    for (int i = 0; i < num_obj; i++){
        cout << endl;
        Star_wars[i] -> muestra_opciones();
    }
}
#endif