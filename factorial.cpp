//Leer un numero entero positivo en un bucle do while y calcular su factorial,
// mediante un bucle for, un bucle while y un bucle do while. 
//(Nota: Factorial de n = n *(n - 1) * (n - 2) * ... *2 * 1).

#include <iostream>

using namespace std;

int main(){
	int numero, i, factorial;
	
	do{
		cout << "ingrese un numero entero positivo: ";
		cin >> numero;
	}while (numero <= 0);
	
	for (i =1, factorial =1; i <= numero; i++)
		factorial *= i;
	cout << "Bucle for" << endl;
	cout << factorial << endl;
	
	i = 1, factorial=1;
	
	while (i < numero){
		i++;
		factorial *= i;
	}
	cout << "Bucle while" << endl;
	cout << factorial << endl;
	
	i = 0, factorial=1 ;
	
	do{
		i++;
		factorial *= i;
	}while (i < numero);
	cout << "Bucle do while" << endl;
	cout << factorial << endl;
	
	
	
	return 0;
}
