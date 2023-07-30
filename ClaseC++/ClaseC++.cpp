// ClaseC++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	// Almacenar 10 estudiantes y mostrar [5]

	int largo;
	string names[10];


	names[0] = "Carlos";
	names[1] = "Javir";
	names[2] = "Andres";
	cout << "Escriba el nombre de la posicion 3 " << endl;
	names[3] = "German";
	names[4] = "Hola";
	names[5] = "Ejemplo";
	cout << "La posicion sub 5 es: " <<names[5];
	names[6] = "Hola 2";
	names[7] = "esto es";
	names[8] = "algo";
	names[9] = "SABES";


	for (int i = 0; i < size(names); i++) {
		cout << size(names)<<endl;

		cout << "Digite el nombre de la posicion  "<<i+1<<" " << endl;
		cin >> names[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << "Eres carlos!? " << endl;
		
		if (names[i] == "carlos" || names[i] == "Carlos") {
			cout << "Crimimall cri criminalll tu estilo tu flow muy criminal" << endl;
		}

	}



	

	/*largo = sizeof(names);
	cout << "Largo del array: " << largo;*/




}
