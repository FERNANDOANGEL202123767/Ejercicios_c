#include <iostream>

using namespace std;

float promedio(float a, float b);

int main(){
float a = 5,b=10,prom;
prom = promedio(a,b);
cout << "El promedio es: " << prom << endl;

return 0;
}
float promedio(float a, float b){
    float prom;
    a= a + 3;
    b= b + 3;
    prom =(a+b)/2;

return prom;
}