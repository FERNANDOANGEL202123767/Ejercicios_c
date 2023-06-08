#include <iostream>
using namespace std;

int maximo(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;
    cout << "El mayor de los dos numeros es: " << maximo(num1, num2) << endl;
    return 0;
}