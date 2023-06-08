#include <iostream>
#include <stack>
using namespace std;

void caracteresInversos() {
    char c;
    stack<char> pila;
    cout << "Introduce caracteres hasta que ingreses un espacio o un salto de linea (Enter):\n";
    while ((c = getchar()) != ' ' && c != '\n') {
        pila.push(c);
    }
    cout << "Caracteres en orden inverso: ";
    while (!pila.empty()) {
        cout << pila.top();
        pila.pop();
    }
    cout << endl;
}

int main() {
    caracteresInversos();
    return 0;
}
