#include<stdio.h>

int main(){
    int n;
    int is_prime = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1){
        is_prime = 0;
    }
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            is_prime = 0;
            break;
        }
        else{
            is_prime = 1;
        }
    }
    if (is_prime == 0){
        printf("NOT PRIME");
    }
    else{
        printf("PRIME");
    }
    return 0;
}