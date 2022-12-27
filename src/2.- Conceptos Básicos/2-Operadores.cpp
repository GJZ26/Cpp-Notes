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

    return 0;
}