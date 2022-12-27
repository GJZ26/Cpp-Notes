/*
Los operadores nos sirven para realizar (redundantemente) operaciones
matemáticas o lógicas, en C++ como en la gran mayoria de los lenguajes de
programación, estos operadores son:

[+] -> Para sumar o concatenar.
[-] -> Para restar.
[*] -> Para multiplicar.
[/] -> Para dividir
[%] -> Módulo, para saber el valor restante de una división

Siendo, la mayoría, operaciones que únicamente se pueden usar en variables
numéricas (int, float).

*/

#include <iostream>

int main()
{

    float a = 10.5f;
    float b = 2.6f;

    int c = 32;
    int d = 3;

    std::string e = "foo";
    std::string f = "bar";

    std::cout << "Operador [+]: " << a << " + " << b << " = " << a + b << std::endl;
    std::cout << "Operador [-]: " << a << " - " << b << " = " << a - b << std::endl;
    std::cout << "Operador [*]: " << a << " x " << b << " = " << a * b << std::endl;
    std::cout << "Operador [/]: " << a << " / " << b << " = " << a / b << std::endl;
    std::cout << "Operador [%]: " << c << " % " << d << " = " << c % d << std::endl;
    std::cout << "Operador [+]: " << e << " + " << f << " = " << e + f << std::endl;

    /*
    Como se puede ver, el módulo [%] sólo puede empleado por números del tipo integer, es
    decir, aquellos que no llevan puntos decimales.
    */

    // INCREMENTOS
    /*

    Una parte importante de las variables es la disponibilidad de poder autocincrementarse
    o decrementarse, de tal forma que nos sirva al momento de iterar sobre algo.
    Se puede hacer dicha operación como:

        a=a+1 para incrementar
                ó
        a=a-1 para decrementar

    O bien, una forma más corta:

        a+=1
          ó
        a-=1

    Pero claro está que en C++ (como en muchos de los lenguajes actuales) es posible utilizar
    los símbolo ++ o -- para hacer esta misma operación de una forma más corta.

    Sin embargo, es importante aclarar algunas cosas:

    a++ / a-- -> Primero utiliza la variable, después hace el incremento o decremento
    ++a / --a -> Primero hace el decremento, después hace uso de la variable

    Lo veamos en un ejemplo:
    */

    // Inicializamos los valores como 2
    int g = 2;
    int h = 2;

    // Al usar a++, primero usará el valor actual de la variable, e incrementará o decrementará uno.
    std::cout << "g++ = " << g++ << std::endl; // 2
    std::cout << "h-- = " << h-- << std::endl; // 2

    // La siguiente ocación que usemos las variables, éstas mostrarán su valor con los cambios realizados
    std::cout << "Valor de g = " << g << std::endl; // 3
    std::cout << "Valor de h = " << h << std::endl; // 1

    // VALORES ACTUALES
    // g = 3
    // h = 1

    // Al usar ++a, primero hará el incremento, luego usará la variable con los cambios hechos
    std::cout << "++g = " << ++g << std::endl; // 4
    std::cout << "--h = " << --h << std::endl; // 0

    // Al modificar los valores antes de usarlo, los proximos usos tendrán el mismo valor
    std::cout << "Valor de g = " << g << std::endl; // 4
    std::cout << "Valor de h = " << h << std::endl; // 0

    return 0;
}