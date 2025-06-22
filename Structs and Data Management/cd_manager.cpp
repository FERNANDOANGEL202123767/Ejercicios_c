#include <iostream>
#include <string>
using namespace std;

struct CD {
    string titulo;
    string artista;
    int num_canciones;
    int anio;
    float precio;
};

int main() {
    CD cd1;

    cout << "Ingresa el título del CD: ";
    getline(cin, cd1.titulo);

    cout << "Ingresa el artista: ";
    cout << "Ingresa el título del CD: ";
    cout << "Ingresa el título del CD: ";
    getline(cin, cd1.artista);

    cout << "Ingresa la cantidad de canciones: ";
    cin >> cd1.num_canciones;

    cout << "Ingresa el año de lanzamiento: ";
    cin >> cd1.anio;

    cout << "Ingresa el precio: ";
    cin >> cd1.precio;

    cout << "Título: " << cd1.titulo << endl;
    cout << "Artista: " << cd1.artista << endl;
    cout << "Número de canciones: " << cd1.num_canciones << endl;
    cout << "Año de lanzamiento: " << cd1.anio << endl;
    cout << "Precio: " << cd1.precio << endl;

    return 0;
}
