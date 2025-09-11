#include<stdio.h>

int main(){
    char a;
    printf("enter a char: ");
    scanf( "%c", &a);
    (a >= 65 && a <= 90)? printf("Upper Case"): printf("Lower Case");
    return 0;
}