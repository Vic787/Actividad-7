#include <iostream>

using namespace std;

// Estructuras struct: es una forma de agrupar varias variables relacionadas en un solo lugar.

struct Estudiante{
	int codigo;
	string nombre;
	int nota;
	
};

main(){
	Estudiante estudiante;
	cout << "Ingrese codigo: ";
	cin >> estudiante.codigo;
	cin.ignore();
	cout << "Ingrese nombre completo: ";
	getline(cin,estudiante.nombre);
	cout << "Ingrese nota: ";
	cin >> estudiante.nota;
	
	cout << "Codigo: " << estudiante.codigo << endl;
	cout << "Nombre completo: " << estudiante.nombre << endl;
	cout << "Nota: " << estudiante.nota << endl;
	system("Pause");
}
