#include <iostream>
using namespace std;

int main() {
    int matriz[10][10];
    int *puntero;

    // Llenar la matriz con los valores del 1 al 100
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }

    // Imprimir la matriz y sus valores multiplicativos
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}