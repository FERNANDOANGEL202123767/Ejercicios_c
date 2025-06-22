#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> x;

    int* arr = new int[x]; // Crear arreglo dinámico de tamaño x

    // Llenar el arreglo con datos ingresados por el usuario
    for (int i = 0; i < x; i++) {
        cout << "Ingrese el elemento " << i << ": ";
        cin >> *(arr + i); // Usar apuntador para acceder a cada elemento del arreglo
    }

    // Imprimir el arreglo
    cout << "El arreglo es: ";
    for (int i = 0; i < x; i++) {
        cout << *(arr + i) << " "; // Usar apuntador para acceder a cada elemento del arreglo
    }

    delete[] arr; // Liberar memoria del arreglo dinámico
    return 0;
}