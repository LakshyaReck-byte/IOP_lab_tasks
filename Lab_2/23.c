#include<stdio.h>

int main(){
    int a, b;
    int pow = 1;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++){
        pow = pow*a;
    }
    printf("%d ^ %d = %d", a, b, pow);
    return  0;
}