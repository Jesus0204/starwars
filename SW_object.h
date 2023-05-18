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

#include <iostream>

using namespace std;

class SW_object {
    // Atributos de la clase
    protected: 
    string nombre;
    string date_created;
    string afilliation;
    public: 
    // Constructor por default
    SW_object(): nombre(""), date_created(""), afilliation(""){}
    // Constructor con parametrizado
    SW_object(string nom, string date, string afi): nombre(nom), date_created(date), afilliation(afi){}

    // Métodos de la clase
    string get_nombre();
    string get_date_created();
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
 * getter de la fecha
 * @return string: fecha cuando el objeto fue creado
 */
string SW_object :: get_date_created(){
    return date_created;
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
    public:
    // Constructor por default
    Personaje(): species(""), home(""), gender(""), SW_object(){}
    // Constructor parametrizado
    Personaje(string nom, string date, string afi, string spe, string hom, string gen): SW_object(nom, date, afi), species(spe), home(hom), gender(gen){}
    // Métodos de la clase
    string get_species();
    string get_home();
    string get_gender();
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
    Weapons(string nom, string date, string afi, int val, string mat): SW_object(nom, date, afi), value(val), material(mat){}
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
    Planeta(string nom, string date, string afi, string reg, bool at): SW_object(nom, date, afi), region(reg), atmosphere(at){}
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