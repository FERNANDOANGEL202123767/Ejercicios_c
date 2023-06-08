#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
string palabra;
std::map<char, int> ocurrencias;

cout << "Ingrese una palabra: ";
cin >> palabra;

for (char letra : palabra) {
    ocurrencias[letra]++;
}

for (auto par : ocurrencias) {
    cout << par.first << " = " << par.second << endl;
}

return 0;
}