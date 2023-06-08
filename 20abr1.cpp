#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) { // caso base
        cout << "0! = 1" << endl;
        return 1;
    } else { // caso recursivo
        int resultado = factorial(n-1);
        cout << n << "! = " << (n-1) << "!*" << n << " = " << resultado << "*" << n << " = " << resultado*n << endl;
        return resultado * n;
    }
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << n << "! = " << factorial(n) << endl;
    return 0;
}