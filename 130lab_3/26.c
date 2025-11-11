#include<stdio.h>

int main(){
    int n;
    printf("enter any number: ");
    scanf("%d", &n);
    int odd = 0;
    int even = 0;
    for(int i = 2; i < n; i++){
        if(i%2 == 0){
            even += i;
        }
        else{
            odd += i;
        }
    }
    
    printf("sum of all odd numbers between 1 and %d is: %d\n", n, odd);
    printf("sum of all even numbers between 1 and %d is: %d\n", n, even);
    return 0;
}