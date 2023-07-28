#include <stdio.h>

int is_equal(int x, int y){
    return !(x ^ y);
}

int main(){
    printf("%x\n", is_equal(0x123abc, 0x123abc));
    printf("%x\n", is_equal(0x133abc, 0x123abc));
}
