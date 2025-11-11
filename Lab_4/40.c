#include<stdio.h>

int main(){
    int n ;
    int sum = 0;
    printf("enter a number: ");
    scanf("%d", &n);
    while (n >= 0){
        sum += n;
        printf("enter a number: ");
        scanf("%d", &n);
    }
    printf("summ of all positive values entered is %d", sum);
    return 0;
}