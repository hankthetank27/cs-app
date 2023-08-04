#include <math.h>
#include <stdio.h>

int tadd_ok(int x, int y){
    int sum = x + y;
/*
 * if (x > 0 && y > 0){
 *      return sum > x && sum > y;
 *  } else {
 *      return sum <= y || sum <= x;
 *  }
*/
    int pos_ovrflw = x > 0 && y > 0 && sum < 0;
    int neg_ovrflw = x < 0 && y < 0 && sum > 0;
    return !(neg_ovrflw || pos_ovrflw);
}


int tsub_ok(int x, int y){
    int tmin = pow(-2, sizeof(int) * 8 - 1);
    return y > tmin && tadd_ok(x, -y);
}

int main(){
    int x = -1231231233;
    int y = -1231231231;
    printf("%d \n", tsub_ok(x, y));
}
