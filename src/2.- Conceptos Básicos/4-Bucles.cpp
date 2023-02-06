/*
    Las iteraciones o bucles es la acción de llamar a un proceso de forma
    repetida, en C++ existen 3 formas de iterar: While, Do While y For
*/

#include <iostream>
int main()
{

    // WHILE
    /*
        Los bucles While tienen la siguiente estructura:
        while(condition) statement;

        El cuál repetirá el codigo siempre que la condición se cumpla, por ejemplo:
        en el siguiente caso el bucle se repetirá siempre que la variable i sea igual o menor a 10
    */

    std::cout << "Bucle con While: ";
    int i = 0;
    while (i <= 10)
    {
        std::cout << i++ << std::ends;
        
    }

    // DO WHILE
    /*
        Esta iteración es similar al WHILE, con la particularidad que la condicional se evalua al final de
        la ejecución, es decir, DO WHILE ejecuta primero el código, posteriormente evalua que se cumpla la
        condición para realizar la siguiente iteración o saltarla.

        Tiene la siguiente estructura:
        DO statement
        WHILE(condition)

    */

    std::cout << std::endl << "Bucle con Do While: ";
    int j = 10;
    do
    {
        std::cout << j-- << std::ends;

    } while (j >= 0);

    // FOR
    /*
        For es la instrucción más usada para iteración, y su estructura es la siguiente
        for(initial iterator; condition; update)

        A diferencia de While y Do While, que tenemos que declarar a nuestro iterador
        externamente, con For, declaramos al iterador y lo actualizamos dentro del bucle.

        Por ejemplo
    */

    std::cout << std::endl << "Bucle con For: ";
    for(int k = 2; k <= 20; k+=2){
        std::cout << k << std::ends;
    }

    return 0;
}