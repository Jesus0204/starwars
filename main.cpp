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

// Esta función va a ir dentro de Game (objeto no creado porque no sé polimorfismo)
void creacion_objetos(){

// Creación de los 16 personajes que van a estar cargados
Personaje Obi_Wan = Personaje("Obi-Wan Kenobi", "57 BBY", "Republic/Jedi", "Human", "Stewjon", "Masculino", 1);
Personaje Anakin = Personaje("Anakin Skywalker", "41 BBY", "Republic", "Human", "Tattoine", "Masculino", 1);
Personaje Ahsoka = Personaje("Ahoska", "36 BBY", "Republic/Jedi/Citizen", "Togruta", "Shili", "Femenino", 1);
Personaje Plo_Koon = Personaje("Plo Koon", "Desconocido", "Republic", "Kel Dor", "Dorin", "Masculino", 1);
Personaje Count_Dooku = Personaje("Count Dooku", "102 BBY", "Separatist/Sith", "Human", "Serenno", "Masculino", 1);
Personaje Yoda = Personaje("Yoda", "896 BBY", "Republic/Jedi", "Desconocido", "Desconocido", "Male", 1);
Personaje Rex = Personaje("Captain Rex", "32 BBY", "Republic/Rebellion", "Human clone", "Kamino", "Male", 1);
Personaje Emperador = Personaje("Emperador", "84 BBY", "Sith/Separatist/Empire/Republic", "Human", "Naboo", "Male", 1);
Personaje Darth_Vader = Personaje("Darth Vader", "19 BBY", "Empire/Sith", "Burnt human", "Coruscant", "Male", 1);
Personaje R2_D2 = Personaje("R2-D2", "32 BBY", "Republic/Rebellion", "R2 astromech droid", "Naboo", "Masculine programming", 1);
Personaje Grievous = Personaje("Grievous", "Desconocido", "Separatist", "Kaleesh", "Kalee", "Male", 1);
Personaje Mando = Personaje("Din Djarin", "Antes de 19 BBY", "Mandalorians", "Human", "Aq Vetina", "Male", 1);
Personaje Maul = Personaje("Darth Maul", "54 BBY", "Sith/Trade Federation", "Zabrak", "Dathomir", "Male", 1);
Personaje Windu = Personaje("Mace Windu", "72 BBY", "Republic/Jedi", "Human", "Haruun Kal", "Male", 1);
Personaje Qui_Gon = Personaje("Qui-Gon Jinn", "80 BBY", "Republic/Jedi", "Human", "Coruscant", "Male", 1);
Personaje Boba = Personaje("Boba Fett", "32 BBY", "Bounty Hunters Guild", "Human Clone", "Kamino", "Male", 1);

string obi_name = Obi_Wan.get_nombre();
cout << obi_name << "\n";

// Ahora las 8 armas (porque hay menos) que se van a usar
Weapons lightsaber = Weapons("Lightsaber", "Jedi/Sith/Grievous", 300000, "Kyber Cyrstal, Metallic Hilt", 2);
Weapons ion_blaster = Weapons("Ion Blaster", "Jawas/Clones vs. Droids", 800, "Ion energy, Metal", 2);
Weapons blaster = Weapons("Blaster", "Clones/Stromtroopers/Rebels", 500, "Plasma energy, Metal", 2);
Weapons seismic_charge = Weapons("Seismic Charge", "Jango/Boba Fett", 10000, "Metal, Sound turned into energy", 2);
Weapons flame = Weapons("BT X-42 Heavy Flame Projector", "Clones/Mandalorian commandos", 2000, "Metal, Flame creator", 2);
Weapons wrist_rocket = Weapons("Wrist Rocket Launcher", "Bounty hunters", 2500, "Metal, Rockets", 2);
Weapons missile_rocket = Weapons("Missile Launcher", "Clones/Stormstroopers/Bounty hunters", 1500, "Metal, Missiles", 2);
Weapons force_pike = Weapons("Force Pike", "Republic/Empire", 500, "Grahphite", 2);

cout << lightsaber.get_value() << "\n";

// Finalmente se crean los 16 planetas que se van a usar (que van a ir dentro el objeto no creado)
Planeta Kamino = Planeta("Kamino", "Republica/Kaminoan Government", "Far Outer Rim/Unknown Territories", 1, 3);
Planeta Tattoine = Planeta("Tatooine", "Hutt Clan/Empire", "Outer Rim", 1, 3);
Planeta Naboo = Planeta("Naboo", "Republic/Royal House of Naboo", "Mid Rim", 1, 3);
Planeta Coruscant = Planeta("Coruscant", "Republic/Empire", "Core Worlds", 1, 3);
Planeta Mustafar = Planeta("Mustafar", "Sith/Separatist","Outer Rim", 1, 3);
Planeta Alderaan = Planeta("Alderaan", "Republic/Rebellion", "Core Worlds", 1, 3);
Planeta Geonosis = Planeta("Geonosis", "Geonosians/Separatists", "Outer Rim" ,1, 3);
Planeta Mandalore = Planeta("Mandalore", "Mandalorians", "Outer Rim", 1, 3);
Planeta Dorin = Planeta("Dorin", "Republic/Empire", "Expansion Region", 0, 3);
Planeta Hoth = Planeta("Hoth", "Rebellion base", "Outer Rim", 1, 3);
Planeta Kashyyyk = Planeta("Kashyyyk", "Wookies/Republic", "Mid Rim", 1, 3);
Planeta Ryloth = Planeta("Ryloth", "Republic/Free Ryloth", "Outer Rim", 1, 3);
Planeta Dathomir = Planeta("Dathomir", "Sith/Nightsisters", "Outer Rim", 1, 3);
Planeta Serenno = Planeta("Serenno", "Separatists/Empire", "Outer Rim", 1, 3);
Planeta Hosnian = Planeta("Hosnian Prime", "Republic/Empire", "Core Worlds", 1, 3);
Planeta Raxus = Planeta("Raxus", "Separatists/Empire", "Outer Rim", 1, 3);

cout << Mandalore.get_affiliation() << "\n";

}

int main(){

creacion_objetos();

}