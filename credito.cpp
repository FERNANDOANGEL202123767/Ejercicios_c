#include <iostream>
using namespace std;

int main(){
	double sueldo, porcentaje, antiguedad;
	cout << "Ingrese sueldo mensual: ";
	cin >> sueldo;
	cout << "Ingrese antiguedad en años: ";
	cin >> antiguedad;
	
	porcentaje = sueldo * .10;
	
	if(antiguedad >= 5 && porcentaje > 1000){
		cout << "usted es sujeto aun credito hipotecario." << endl;
	}
	if(antiguedad < 5 || porcentaje <= 1000){
		cout << "lo siento usted no es sujeto aun credito hipotecario." << endl;
 }
	
	return 0;
}
