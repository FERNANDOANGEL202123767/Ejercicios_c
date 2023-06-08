#include <iostream>
#include <cstring>
using namespace std;

int main(){

char palabra1[100], palabra2[100];
int resultado;

cout << "Ingrese la primera palabra: ";
cin >> palabra1;
cout << "Ingrese la segunda palabra: ";
cin >> palabra2;

resultado = strcmp(palabra1, palabra2);

if(resultado == 0){
    cout << "Ambas palabras son iguales" << endl;
} else if(resultado < 0){
    cout << "La palabra " << palabra1 << " es menor que la palabra " << palabra2 << endl;
} else {
    cout << "La palabra " << palabra1 << " es mayor que la palabra " << palabra2 << endl;
}

return 0;
}