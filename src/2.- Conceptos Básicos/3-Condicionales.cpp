// Condicionales
/*
	Los programas también pueden tener sus decisiones, y aquí es donde entra
	las condicionales, que cambian el comportamiento de una perte del programa
	o del algoritmo completo.

	Para este comportamiento en específico usaremos las sentencias if, que posee
	la siguiente estructura:

	if(condicional)
		enunciado
*/

#include <iostream>
int main()
{

	int a = 10;
	int b = 5;

	if (a > b)
		std::cout << a << " es mayor que " << b << std::endl;

	/*
	En la sentencia anterior, se imprime el mensaje siempre y cuando el valor
	de a sea mayor que b, caso contrario, no hará nada, pero, ¿cómo evaluamos los
	dos escenarios?

	Esto se puede realizar con la sentencia else, de la siguiente forma:
	*/

	if (a < b)
		std::cout << a << " es menor que " << b << std::endl;
	else if (a == b)
		std::cout << a << " es igual que " << b << std::endl;
	else
		std::cout << a << " es mas grande que" << b << std::endl;
	// else if
	/*
		El programa quizás requiera que nuestro programa hago algo diferente cuando cumple
		otra condición diferente a la evaluación inicial, para esto, usamos las sentencias
		else if, que en caso de no cumplir la evalución del primer if, evaluará la condición 
		consecuente del else if, y en caso de no cumplir ninguna de ambas condiciones, terminará
		de resolverse dentro del else.
	*/

	return 0;
}