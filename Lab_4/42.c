#include<stdio.h>

int main(){
    int n;
    int is_prime = 1;
    //is_prime = 1 for prime
    //is_prime = 0 for not prime
    printf("enter a number: ");
    scanf("%d", &n);
    
    if(n == 0 || n == 1){
        is_prime = 0;
    }
    for(int i = 2; i< n; i++){
        if(n%i != 0){
            is_prime = 1;
        }
        else{
            is_prime = 0;
            break;
        }
    }

    if (is_prime == 1){
        printf("%d is a prime number", n);
    }
    else if (is_prime == 0){
        printf("%d is a composite number", n);
    }
    return 0;
}