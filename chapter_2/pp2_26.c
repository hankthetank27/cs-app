#include <stdio.h>

/* Prototype for library function strlen */
size_t strlen(const char *s);

/* Determine whether string s is longer than string t */
/* WARNING: This function is buggy */
int strlonger(char *s, char *t) {
    return (long) strlen(s) - (long) strlen(t) > 0;
}

int main(){
    printf("%d\n", strlonger("a", "11"));
    printf("%d\n", strlonger("hasdfasdfenryj", "jamie"));
}

/* strlen returns type size_t which is an unsigned long. 
 * When subtracting an unsigned value from another unsigned value to 
 * check if it is < 0, the value is calcuated used modular addtion and 
 * is alwasy represented by a number greater than 0.
 *
 * My solution was to typecast the size_t to longs before subtracting the values.
 * 
 * Another solution would be to simple compare the values directly ie. 
 * return strlen(s) > strlen(t);
 * */
