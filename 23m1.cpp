#include <iostream>

using namespace std;

int main(){

int N;
cout << "Introduzca un N";
cin>>N;
for(int i =1; i<=N; i++){
    for(int j= 1; j <= N; j++){
        if(j <= N-i){
            cout <<"*";
        }else{
            cout <<"=";
        }
    }
   cout << endl;
}


    return 0;
}