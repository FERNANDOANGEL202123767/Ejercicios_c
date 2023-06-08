#include <iostream>

using namespace std;

int main(void){
    int i,n;
    int * buffer, * p_buffer;

    cout << "teclea la longitud del arreglo: ";
    cin >> n;

    buffer = ((int*) malloc(n * sizeof(int)));
    if (buffer==NULL) exit (1);

    p_buffer = buffer;
    for(i=0; i<n; i++){
        cout << "ingresa el valor: ", i;
        cin >> p_buffer++;
    }

    p_buffer = buffer;
    cout << "Los valores son: " << endl;
    for(n=0; n<i; n++){
        cout << "arreglo =" << n << p_buffer++ << endl;
    }

    free (buffer);

}