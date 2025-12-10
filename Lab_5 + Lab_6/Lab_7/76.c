#include<stdio.h>

void even_o_odd (int n){
    if(n%2 == 0){
        printf("%d is even", n);
    }else{
        printf("%d is odd", n);
    }
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    even_o_odd(n);
    return 0;
}