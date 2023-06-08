#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char palabra_1[100], palabra_2[100];

    // Pedimos al usuario que ingrese las palabras
    cout << "Ingrese la primera palabra: ";
    cin >> palabra_1;
    cout << "Ingrese la segunda palabra: ";
    cin >> palabra_2;

    // Imprimimos las palabras antes del intercambio
    cout << "Antes del intercambio:" << endl;
    cout << "palabra_1 = " << palabra_1 << endl;
    cout << "palabra_2 = " << palabra_2 << endl;

    // Intercambiamos las palabras
    char temp[100];
    strcpy(temp, palabra_1);
    strcpy(palabra_1, palabra_2);
    strcpy(palabra_2, temp);

    // Imprimimos las palabras despues del intercambio
    cout << "Despues del intercambio:" << endl;
    cout << "palabra_1 = " << palabra_1 << endl;
    cout << "palabra_2 = " << palabra_2 << endl;

    return 0;
}