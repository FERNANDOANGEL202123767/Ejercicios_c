#include <iostream>

using namespace std;

int *p, y;

void func(){
int x=40;
p=&x;
y=*p; //Correcto
*p=23; //Correcto
}

int main(void){
func();
y=*p; //Incorrecto
*p=25; //Incorrecto
cout << "El valor de y es: " << y << " El valor de *p es: " << *p << " El valor de p es: " << p << endl;

}