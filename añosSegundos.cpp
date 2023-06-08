#include <iostream>

using namespace std;

int main(){
    int edad = 21;
    int min = 60;
    int hrs = 60;
    int dia = 24;
    int año = 365;

    int segundos = edad*min*hrs*dia*año;

    cout << segundos << endl;

    return 0;

}