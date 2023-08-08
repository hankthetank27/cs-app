#include <stdint.h>
#include <stdio.h>

int tmult_ok(int x, int y){
    int64_t test = (int64_t) x * y;
    return test == x * y;
}
