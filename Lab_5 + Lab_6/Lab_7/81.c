#include<stdio.h>

void is_prime(int n){
    int is_prime = 1;
    if (n == 0 || n == 1){
        is_prime = 0;
    }
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            is_prime = 0;
            break;
        }
        else if(n %i != 0){
            is_prime = 1;
        }
    }
    if (is_prime  == 0){
        printf("0");
    }
    else{
        printf("1");
    }
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    is_prime(n);
    return 0;
}