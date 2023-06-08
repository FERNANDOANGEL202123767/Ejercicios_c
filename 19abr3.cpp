#include <iostream>
#include <cstring>

using namespace std;

bool esPalindroma(string palabra) {
int longitud = palabra.length();
for (int i = 0; i < longitud / 2; i++) {
if (palabra[i] != palabra[longitud - i - 1]) {
return false;
}
}
return true;
}

int main() {
string palabra;
cout << "Ingrese una palabra: ";
cin >> palabra;
if (esPalindroma(palabra)) {
cout << "La palabra es palindroma" << endl;
} else {
cout << "La palabra no es palindroma" << endl;
}
return 0;
}