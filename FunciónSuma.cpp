#include <iostream>

using namespace std;

// Métodos y funciones: ejecutan una porción de código N cantidad de veces según se mande a llamar
// Método: no retorna un tipo de dato
// Función: retorna un tipo de dato determinado
// Ej: 80 líneas de código se pueden usar en 10 lugares distintos = 800 líneas de código
// de las cuales 80 son iguales, para evitar eso se crea una FUNCIÓN o Método
// y se manda a llamar 10 veces.

// Para este ejemplo será una función que sume dos valores

int suma(int num1, int num2){
	int resultado = 0;
	resultado = num1 + num2;
	// Aunque puede abreviarse como return num1+num2, en vez de crear más variables.
	return resultado;
}

main(){
	cout << suma(10,20) << endl;
	cout << suma(50,70) << endl;
	cout << suma(90,10) << endl;
	system("Pause");
}
