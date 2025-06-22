#include <iostream>
using namespace std;
int main(){
	double calificacion;
	cout <<"ingrese la calificacion del alumno";
	cin >> calificacion;
	
	if(calificacion >= 8){
		cout <<"Felicidades aprobaste el curso con " << calificacion << endl;
	}
	return 0;
}
