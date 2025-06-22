#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int x;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> x;

    void** arreglo = (void**) malloc(x * sizeof(void*));
    if (arreglo == NULL) {
        cout << "Error al asignar memoria" << endl;
        exit(1);
    }

    cout << "Ingrese los valores del arreglo:" << endl;
    for (int i = 0; i < x; i++) {
        char* buffer = (char*) malloc(100 * sizeof(char));
        if (buffer == NULL) {
            cout << "Error al asignar memoria" << endl;
            exit(1);
        }
        cin >> buffer;
        arreglo[i] = buffer;
    }

    cout << "Los valores del arreglo son:" << endl;
    for (int i = 0; i < x; i++) {
        if (arreglo[i] != NULL) {
            if (isdigit(((char*) arreglo[i])[0])) {
                cout << *((int*) arreglo[i]) << " ";
            } else {
                cout << (char*) arreglo[i] << " ";
            }
        }
    }
    cout << endl;

    for (int i = 0; i < x; i++) {
        if (arreglo[i] != NULL) {
            free(arreglo[i]);
        }
    }
    free(arreglo);
    return 0;
}