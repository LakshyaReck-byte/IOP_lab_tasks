#include<stdio.h>

int main(){
    char a = 'a';
    char b  = 'b';
    printf("initial values of a and b are %c, %c\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("swapped values of a and b are %c, %c", a, b);
    return 0;
}