#include<stdio.h>

int main(){
    int a, b, c;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("enter third number: ");
    scanf("%d", &c);
    if (a >= b){
        if (a >= c){
            printf("max is %d", a);
        }
        else{
            printf("max is %d", c);
        }
    }
    else{
        if (b >= c){
            printf("max is %d", b);
        }
        else{
            printf("max is %d", c);
        }
    }
    return 0;
}
