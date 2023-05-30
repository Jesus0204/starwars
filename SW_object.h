/*
 * Proyecto Juego eliminador de Star Wars
 * Jesús Alejandro Cedillo Zertuche
 * A01705442
 * 16/06/2023
 */

/*
 * Clase de SW_object con generalidades de cada objeto
 * Clase Personaje con info general del personaje
 * Clase Weapons con info general del arma
 * Clase Planeta con info general sobre el planeta
 */

#ifndef SW_OBJECT_H
#define SW_OBJECT_H
#include <iostream>

using namespace std;

class SW_object {
    // Atributos de la clase
    protected: 
    string nombre;
    string afilliation;
    int game_type;
    public: 
    // Constructor por default
    SW_object(): nombre(""), afilliation(""), game_type(0){}
    // Constructor con parametrizado
    SW_object(string nom, string afi, int type): nombre(nom), afilliation(afi), game_type(type){}

    // Métodos de la clase
    string get_nombre();
    string get_affiliation();
};

/**
 * getter nombre
 * @return string: nombre del objeto
 */
string SW_object :: get_nombre(){
    return nombre;
}

/**
 * getter afilliation
 * @return string: afiliación del objeto (grupo a donde pertenece)
 */
string SW_object :: get_affiliation(){
    return afilliation;
}

// Clase Personaje que hereda de SW_object
class Personaje: public SW_object{
    // Atributos del objeto
    private:
    string species;
    string home;
    string gender;
    string date_born;
    public:
    // Constructor por default
    Personaje(): species(""), date_born(""), home(""), gender(""), SW_object(){}
    // Constructor parametrizado
    Personaje(string nom, string date, string afi, string spe, string hom, string gen, int type): SW_object(nom, afi, type), date_born(date), species(spe), home(hom), gender(gen){}
    // Métodos de la clase
    string get_species();
    string get_home();
    string get_gender();
    string get_date_born();
};

/**
 * getter species
 * @return string: la especie del personaje
 */
string Personaje :: get_species(){
    return species;
}

/**
 * getter home
 * @return string: el planeta de origen del personaje
 */
string Personaje :: get_home(){
    return home;
}

/**
 * getter gender
 * @return string: el género del personaje
 */
string Personaje :: get_gender(){
    return gender;
}

/**
 * getter de la fecha
 * @return string: fecha cuando el personaje nació
 */
string Personaje :: get_date_born(){
    return date_born;
}


// Clase Weapons que hereda de SW_object
class Weapons: public SW_object{
    // Atributos del objeto
    private:
    float value;
    string material;
    public:
    // Constructor por default
    Weapons(): value(0.0), material(""), SW_object(){}
    // Constructor parametrizado
    Weapons(string nom, string afi, int val, string mat, int type): SW_object(nom, afi, type), value(val), material(mat){}
    // Métodos de la clase
    int get_value();
    string get_material();
};

/**
 * getter value
 * @return int: el valor númerico del arma (precio)
 */
int Weapons :: get_value(){
    return value;
}

/**
 * getter material
 * @return string: el material que está hecho el arma
 */
string Weapons :: get_material(){
    return material;
}

// Clase Planeta que hereda de SW_object
class Planeta: public SW_object{
    // Atributos del objeto
    private:
    string region;
    bool atmosphere;
    public:
    // Constructor por default
    Planeta(): region(""), atmosphere(true), SW_object(){}
    // Constructor parametrizado
    Planeta(string nom, string afi, string reg, bool at, int type): SW_object(nom, afi, type), region(reg), atmosphere(at){}
    // Métodos de la clase
    string get_region();
    bool get_atmosphere();
};

/**
 * getter region 
 * @return string: la región de donde está ubicado el planeta
 */
string Planeta :: get_region(){
    return region;
}

/**
 * getter atmosphere
 * @return bool: Si el planeta es respirable o no
 */
bool Planeta :: get_atmosphere(){
    return atmosphere;
}

#endif