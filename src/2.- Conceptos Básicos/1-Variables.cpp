// Tipos de variables en c++
#include <iostream>
#include <conio.h>

/*
Parte fundamental de los lenguajes de programación, es el uso de variables para
almacenar información de forma temporal dentro del programa.

Para definir una variable en C++, se usa el siguiento formato:

TIPO nombreVarible = valor;

A continuación, una lista de los tipos de variables, valores mínimos, máximos y tamaños en bytes.
*/

int main(){

    bool boleano = true;        // | Min |      false     | Max |     true      | Tamaño: 1 byte  |
    char caracter = 'a';        // | Min |      -128      | Max |      127      | Tamaño: 1 byte  |
    short corto = 3;            // | Min |     -32,768    | Max |    327,677    | Tamaño: 2 bytes |
    int entero = 32;            // | Min | -2,147,483,648 | Max | 2,147,483,647 | Tamaño: 4 bytes |
    long largo = 32;            // | Min | -2,147,483,648 | Max | 2,147,483,647 | Tamaño: 4 bytes |
    float flotante = 3.1416f;   // | Min |    3.4x10-38   | Max |    3.4x1038   | Tamaño: 4 bytes |
    double doble = 3200;        // | Min |   1.7x10-308   | Max |   1.7x10308   | Tamaño: 8 bytes |

    // STRING
    /* Las variables de tipo string son especiales, esto se debe porque no son numéricas, contrario a los char
    que se pueden representar como un codigo, entre 0 y 128, positivo o negativo, un String es un conjunto
    de muchos carácteres individuales. Esto está a cargo de la biblioteca de std, y para declararlo, hace falta
    hacer lo siguiente: */

    std::string cadena = "Juanin";

    // IMPRIMIR VARIABLES
    /* Para imprimir variables por consola, se usará cout y junto los signos de menor que para concatenar variables
    y textos que definamos, como se muestra a continuación:
     */

    std::cout << "Asi se imprime el valor Boleano: " << boleano << std::endl;
    std::cout << "Asi se imprime el valor Char: " << caracter << std::endl;
    std::cout << "Asi se imprime el valor Short: " << corto << std::endl;
    std::cout << "Asi se imprime el valor Int: " << entero << std::endl;
    std::cout << "Asi se imprime el valor Long: " << largo << std::endl;
    std::cout << "Asi se imprime el valor Float: " << flotante << std::endl;
    std::cout << "Asi se imprime el valor Double: " << doble << std::endl;
    std::cout << "Asi se imprime el valor String: " << cadena << std::endl;

    // Variables sin asignar - unsigned
    /*
    También tenemos la posibilidad de extender el límite de las variables que almacenemos con las variables unsigned.
    Estos tipos de variables únicamente almacenan valores positivos, comenzando desde el cero, provocando que el espacio usado
    para almacenar datos negativos se duplique y pasen a ser datos positivos.
    Por ejemplo:
    */

    unsigned int intUns = -1; //     Max Unsigned | 4,294,967,295
    unsigned short shortUns = -1; // Max Unsigned |     65,535
    unsigned long longUns = -1; //   Max Unsigned | 4,294,967,295
    unsigned char charUns = -2; //   Max Unsigned |      255

    std::cout<< intUns << std::endl;
    std::cout<< shortUns << std::endl;
    std::cout<< longUns << std::endl;
    std::cout<< charUns << std::endl;

    /*
    intUns, shortUns, longUns y charUns, son variables sin asignar, por lo que sus valores es igual a su valor 
    mínimo - 1.
    Al no permitir valores negativos, se imprimirá el valor máximo - el valor negativo, por ejemplo:

    La variable charUns, que es un char, su valor mínimo es -128,
    Así que su valor extendido sería, (128 x 2) - 1 = 256-1 = 255


    Así que su valor máximo paso de ser 127 a 255.

    Al declararlo con el valor de -2, almacenará el doble del valor mínimo (256) menos el valor negativo (-2),
    dando 254, que en valor ASCII sería el símbolo (■).


    */    

    return 0;
}