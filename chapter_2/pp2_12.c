#include <stdio.h>

int bis(int x, int m){
    int result = x | m;
    return result;
}

int bic(int x, int m){
    int result = x & ~m;
    return result;
}

int main(){
    printf("%x\n", bis(0xABC12345, 0xFF));
    printf("%x\n", bic(0xABC12345, 0xFF));
}
