#include <stdio.h>

int main (){
    char *word = "hi im hank";
    for (char *i = word; *i; i++){
        printf("%p\n", i);
    }
    for (char *i = word; *i; i++){
        printf("%c\n", i[0]);
    }
}
