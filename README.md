# Star wars Elimination Game

## Contexto 
En redes sociales, siempre hay cuentas que hacen eliminaciones de personajes, armas o planetas para saber cuál es el más popular. Aunque en este caso es un poco dificíl incluir a las redes sociales, este programa es como un tipo de juego, donde el usuario puede elegir entre dos cosas múltiples veces, para finalmente tener un ganador, o el mejor de este tipo de objeto. Esto se podría hacer con cualquier tipo de cosa, lo voy a hacer con Star Wars, ya que es un tema bastante popular hoy en día y aparte me gusta

## Funcionalidad
Este programa va a tener precargados ciertos personajes, armas o planetas, donde el usuario primero elige el tipo de objeto con el que quiere jugar, y después en base a lo que eligió empieza a decidir cuál es el mejor entre los objetos que eligió. Para la simplicidad del programa, *por ahora* no se van a poder agregar personajes. Si es que da tiempo y se puede, entonces ya agrego está funcionalidad. Es importante mencionar que como igual los datos son conocidos, en la mayoría de los casos solo hay dos constructores, el vacío y el parametrizado dependiendo del caso. De igual forma, para que tenga sentido el juego, solo se va a poder jugar con el mismo tipo de objeto, no se va a poder mezclar uno con otro. 

Se corre en consola, y se compila con g++

## Tipo de objetos
Para evitar confusiones, estos son los tipos de objetos que va a tener el juego: 
1. SW_object: Esta es la plantilla de cualquier tipo de objeto. Los tres diferentes tipos  de cosas heredan de aquí la característica del nombre, la fecha creada al igual que su afiliación. 
2. Personaje: El primer tipo de objeto. Aparte de heredar, tiene especie, planeta de origen al igual que género. 
3. Weapons: El segundo tipo de objeto. Aparte de heredar, tiene su valor monetario al igual del material que está hecho. 
4. Planeta: El último tipo de objeto. Aparte de heredar, tiene su región, y un booleano si su atmosphera es respirable. 
5. Game: Este objeto va a servir como base de datos, donde se va a tener una lista con los 3 tipos de objeto, al igual que un integer indicando que tipo de juego el usuario decidió jugar. 
