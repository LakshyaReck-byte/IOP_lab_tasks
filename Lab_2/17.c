#include<stdio.h>

int main(){
    int a, b, c;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("enter third number: ");
    scanf("%d", &c);
    if(a >= b && a >= c){
        printf("max is %d", a);
    }
    else if (b >= a && b >= c){
        printf("max is %d", b);
    }
    else if (c >= a && c >= b){
        printf("max is %d", c);
    }
    return 0;
}