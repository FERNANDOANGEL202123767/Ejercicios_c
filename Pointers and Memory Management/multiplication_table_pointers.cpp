#include <iostream>

using namespace std;

void tablaMultiplicar(int n, int* tabla) {
    for (int i = 1; i <= 10; i++) {
        tabla[i-1] = n * i;
    }
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int tabla[10];
    int* pTabla = tabla;

    tablaMultiplicar(n, pTabla);

    cout << "Tabla de multiplicar de " << n << ":" << endl;
    for (int i = 0; i < 10; i++) {
        cout << n << " x " << i+1 << " = " << *(pTabla+i) << endl;
    }

    return 0;
}