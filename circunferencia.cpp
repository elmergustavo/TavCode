/* realice un Programa que lee el radio, calcula y visualiza la longitud 
de la circunferencia de ese radio, y el área
del círculo del mismo radio. */

#include <iostream>
#define pi 3.141592
using namespace std;

int main(){
	
	float radio, longitud, area;
	
	cout << "Ingrese el radio: ";
	cin >> radio;
	
	longitud = 2*pi*radio;
	area = pi*radio*radio;
	
	cout << "La longitud es: " << longitud << endl;
	cout << "el area es: " << area << endl;
	
	
	return 0;
}
