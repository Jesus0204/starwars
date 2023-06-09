# Star wars Elimination Game

## Contexto 
En redes sociales, siempre hay cuentas que hacen eliminaciones de personajes, armas o planetas para saber cuál es el más popular. Aunque en este caso es un poco dificil incluir a las redes sociales, este programa es como un tipo de juego, donde el usuario puede elegir entre dos cosas múltiples veces, para finalmente tener un ganador, o el mejor de este tipo de objeto. Esto se podría hacer con cualquier tipo de cosa, pero lo voy a hacer con Star Wars, ya que es un tema bastante popular hoy en día y aparte me gusta bastante.

## Funcionalidad
Este programa va a tener precargados ciertos personajes, armas o planetas, donde el usuario primero elige el tipo de objeto con el que quiere jugar, y después en base a lo que eligió empieza a decidir cuál es el mejor entre los objetos que eligió. Para la simplicidad del programa, no se van a poder agregar personajes. Es importante mencionar que como igual los datos son conocidos, en la mayoría de los casos solo hay dos constructores, el vacío y el parametrizado dependiendo del caso. De igual forma, solo se puede jugar con el mismo tipo de objeto (Personaje, Planeta o Arma), o con Personajes y Planetas combinados. Para simplicidad, tiene que haber 2^n elementos en la lista donde n es de 1 a 6, ya que cualquier otro número es múltiplo de 3 o algún otro número y esto complica la eliminación. Por lo mismo no se van a poder agregar elementos, ya que tendrían que ser 16 en el caso de Personajes y Planetas, y 8 de armas. 

Va a haber 16 objetos de cada tipo (8 de armas, ya que son menos), para que se pueda hacer la comparación sin ningún tipo de problema. 

## Tipo de objetos
Para evitar confusiones, estos son los tipos de objetos que va a tener el juego: 
1. SW_object: Esta es la plantilla de cualquier tipo de objeto. Los tres diferentes tipos de cosas heredan de aquí la característica del nombre, su afiliación al igual que un número indicando que tipo de objeto son. 
2. Personaje: El primer tipo de objeto. Aparte de heredar, tiene especie, planeta de origen al igual que género. 
3. Weapons: El segundo tipo de objeto. Aparte de heredar, tiene su valor monetario al igual del material que está hecho. 
4. Planeta: El último tipo de objeto. Aparte de heredar, tiene su región, y un booleano si su atmosphera es respirable. 
5. Game: Este objeto va a servir como base de datos, donde se va a tener una lista de SW_object, donde con polimorfismo la lista puede tener un solo tipo de objeto o los 3 a la vez, al igual que un integer indicando la cantidad de datos que se tiene en la lista.

## Consideraciones
Se corre en consola, y se compila con g++
Se usan las librerías de iostream, random y algorithm (para la función de shuffle)
De igual forma, cuando se pide un input o alguna entrada, solo se pueden usar números. Si se llegan a usar letras, el programa se cicla. Esto está en las instrucciones, cuando se le pide algún input al usuario.
