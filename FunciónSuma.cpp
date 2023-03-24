#include <iostream>

using namespace std;

// M�todos y funciones: ejecutan una porci�n de c�digo N cantidad de veces seg�n se mande a llamar
// M�todo: no retorna un tipo de dato
// Funci�n: retorna un tipo de dato determinado
// Ej: 80 l�neas de c�digo se pueden usar en 10 lugares distintos = 800 l�neas de c�digo
// de las cuales 80 son iguales, para evitar eso se crea una FUNCI�N o M�todo
// y se manda a llamar 10 veces.

// Para este ejemplo ser� una funci�n que sume dos valores

int suma(int num1, int num2){
	int resultado = 0;
	resultado = num1 + num2;
	// Aunque puede abreviarse como return num1+num2, en vez de crear m�s variables.
	return resultado;
}

main(){
	cout << suma(10,20) << endl;
	cout << suma(50,70) << endl;
	cout << suma(90,10) << endl;
	system("Pause");
}
