#include <stdio.h>

int x = 0x98FDECBA;

int a(int x){
    return x | ~0xFF;
}

int b(int x){
   return x ^ 0xFF;
}

int c(int x){
    return x & ~0xFF;
}

int main(){
    int a_res = a(x);
    int b_res = b(x);
    int c_res = c(x);
    printf("%x\n", a_res);
    printf("%x\n", b_res);
    printf("%x\n", c_res);
}
