#include <iostream>

using namespace std;

int main(){
    int i = 1;
    while(i <= 500){
        int cuadrado = i * i;
        int cubo = i * i*i;
        cout << "Numero: " << i << ", Cuadrado: " << cuadrado << ", Cubo: " << cubo << endl;
        i++;
    }
    return 0;
}