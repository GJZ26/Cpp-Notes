// En este archivo explicaré cómo se compone un archivo básico para c++

// Empezamos por las importaciones necesarias
#include <iostream>
// A diferencia de otros lenguajes, en c++ se usa la palabra include en vez de
// import para importar dependencias. Seguido, entre diamentes va el nombre del
// archivo o dependencia a importar.

/*
Como Java, Kotlin y otros lenguajes de programación, es necesario declarar la
función principal que ejecutará el programa. En este caso, debe llevar el nombre
de "main".

La estructura de una función es, TIPO nombre(paramatros){ logica }.
En este caso es una función main, que debería retornar un valor de tipo int.

En caso de no devolver nada, deberá ser una función de tipo void.
*/

int main(){

    /*
        STD
        Es una biblioteca de estándar de clases y funciones para manipular
        objetos, cadenas y flujo genéricos.
        Para este caso, lo usaremos para imprimir una cadena de carácteres en la
        pantalla de la consola.
        Al ser una biblioteca de muchos método, debemos acceder a ella mediante los doble-doble puntos.

        En otros lenguajes, se acceden a través de un sólo punto, ej: Bibliotea.metodo().
        En C++ se accede a traves de biblioteca::metodo()
     */

    std::cout << "Hola mamá!" << std::endl; // Endl, forma parte de std, y hace un salto de línea al final de la impresión

    // using namespace std - Buena o mala práctica?
    /* Es posible que hayas visto alguna vez el enunciado: using namespace std
    esto declara que usaremos los métodos de la librería std (o cualquier otra) y nos evita
    tener que usar el método anterior para utilizar las funciones de la biblioteca como std::cin

    Sin embargo, es considerado mala práctica, debido que puede haber duplicidad de funciones, por alguna
    actualización de alguna biblioteca que causaría problemas a la hora de ejecutar el programa.

    para esto, es mejor definir de qué biblioteca viene los métodos que estamos utilizando. */

    return 0;
    // Si hemos declarado la función como int, regresamos un valor del mismo tipo
}