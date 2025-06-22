#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char palabra_1[100], palabra_2[100];

    cout << "Ingrese la primera palabra: ";
    cin >> palabra_1;
    cout << "Ingrese la segunda palabra: ";
    cin >> palabra_2;

 
    int N = strlen(palabra_1);
    for (int i = 0; i < N; i++) {
        strcat(palabra_1, palabra_2);
    }


    cout << "Resultado: " << palabra_1 << endl;

    return 0;
}