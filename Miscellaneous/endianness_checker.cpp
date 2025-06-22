#include <stdio.h>
#include <cstdlib>
#include <cstdio>

int main(){
    int num = 1;
    char* p= reinterpret_cast<char*>(&num);

    if (*p == 0){
        printf("es little-endian.\n");
    }else{
        printf("es big-endian.\n");
    }
    return 0;
}