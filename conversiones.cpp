/*Desglosar cierta cantidad de segundos introducida por teclado en su equivalente en semanas, días,
horas, minutos y segundos.
El programa lee el número de segundos y realiza las conversiones, 
teniendo en cuenta que una semana tiene 7 días, un
día tiene 24 horas, una hora 60 minutos, y un minuto 60 segundos. */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int semanas, dias, horas, minutos, segundos, cantidadSegundos;
	
	cout << "Ingrese la cantidad de segundos: ";
	cin >> cantidadSegundos;
	
	segundos = cantidadSegundos % 60;
	cantidadSegundos = cantidadSegundos / 60;
	minutos = cantidadSegundos % 60;
	cantidadSegundos = cantidadSegundos / 60;
	horas = cantidadSegundos % 24;
	cantidadSegundos = cantidadSegundos / 24;
	dias = cantidadSegundos % 7;
	semanas = cantidadSegundos / 7;
	
	cout << "Segundos en semanas, dias, horas, minutos, y segundos" << endl;
	cout << "Numero de semanas: " << semanas << endl;
	cout << "Numero de dias: " << dias << endl;
	cout << "Numero de horas: " << horas << endl;
	cout << "Numero de minutos: " << minutos << endl;
	cout << "Numero de segundos: " << segundos << endl;
	
	system("PAUSE");
}




