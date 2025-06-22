#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char origen[]="brisas";
    char destino[11]="para";
    strcat(destino, origen);
    cout << "destino: " << destino << endl;
    return 0;
}