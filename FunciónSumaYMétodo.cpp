#include <iostream>

using namespace std;

// Función suma2 y método

int suma2(int num1, int num2, int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}

// Métodos: método y envío de parámetros por referencia (y valor)
void suma(int &num1, int &num2){ // Con punteros tira otro resultado distinto a 10 y 20
	int resultado = 0;
	num1 += 1; // 11
	num2 += 1; // 21
	resultado = num1+num2; // 32
	cout << resultado << endl;
}

main(){
	int a = 10, b = 20;
	suma(a,b);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	system("Pause");
}


