#include <stdio.h>

int tmult_ok(int x, int y){
    int p = x * y;
    return !x || p / y == y;
}
