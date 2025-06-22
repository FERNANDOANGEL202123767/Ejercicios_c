#include <iostream>

using namespace std;

int main(){
    int vector[10];
    int i = 0;
    while(i<10){
        vector[i] = 10;
        i++;
    }
    i = 0;
    while(i<10){
        cout << vector[i] << endl;
        i++;
    }
    return 0;
}