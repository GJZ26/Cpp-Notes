#include <iostream>
#include <conio.h> // Sólo para Windows

/*
Hola! Bienvenido a mis apuntes de C++ enfocado a desarrollo de videojuegos
Aquí están algunas de mis anotaciones que estaré haciendo para poder explicar un poco cómo
trabajar con este lindo lenguaje, desde los conceptos más básicos, hasta lo más complejos
espero te sirva:) 

Este es un programa que imprime en pantalla en "Hola mundo hermoso!" y espera a cualquier
input del usuario para cerrar el programa.

Algunas cabeceras son exclusivos de los recursos nativos de Windows, así que es posible que tu
compilador no las halle en caso de arrancar en el caso de sistemas UNIX o LINUX.

*/

int main(){
    std::cout << "Hola mundo hermoso!" << std::endl;
    _getch(); // De conio.h
    return 0;
}