#include <iostream>
using namespace std;

int main() {
    double result = 5 + 2 / (1 / (1 + 2 / (2 - 1.0 / 4))); // realizamos el cálculo
    cout<<"Operación: 5 + 2/(1/(1 + 2/(2 - 1/4)))\n"<<endl; // mostramos la operación con printf
    cout<<"Resultado:"<<result<<endl; // mostramos el resultado con printf con dos decimales después del punto
    return 0;
}