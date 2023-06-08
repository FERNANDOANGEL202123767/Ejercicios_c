#inlcude <iostream>

using namespace std;

int main(){
int M,N;
cout << "Ingresa dos nuneros separados por un espacio: ";
cin >> M >> N;
cout << endl;
for(int i = M; i <= N; i++){
    cout << "Tbla de multiplicacion del " << i << ":" << endl;
    for(int j= 1; j<= 10; j++){
        cout << i << "x" << j << "=" << i+j << endl;
    } 
    cout << endl;
}
    retun 0;

}