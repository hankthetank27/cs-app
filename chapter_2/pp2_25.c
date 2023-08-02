#include <stdio.h>

float sum_elements(float a[], int length) {
    float result = 0;

    for (int i = 0; i <= length-1; i++)
        result += a[i];
    return result;
}

int main(){
    float a[3] = {1,2,3};
    printf("%f\n", sum_elements(a, 0));
}
