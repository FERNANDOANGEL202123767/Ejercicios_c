#include <iostream>

using namespace std;
int main(){
int a,i,j;
cout <<"ingrese el numero entero en A";
cin >> a;

for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        cout << a+2*i+2*j <<endl;
    }
}
    return 0;
}