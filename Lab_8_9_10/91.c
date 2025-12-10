#include<stdio.h>

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int *p = &n;

    printf("square: %d\n", (*p) * (*p));
    printf("cube: %d\n", (*p) * (*p) * (*p));
    return 0;
}