#include <iostream>

using namespace std;

void intercambio(int*a,int*b){
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}
int main(){
int x=2;
int y=5;
cout << "Antes x = " << x << ","<< "y = " << y << endl;
intercambio(&x,&y);
cout << "Despues x = " << x << ","<< "y = " << y << endl;
return 0;
}
