#include<stdio.h>


int fibo(int n){
    int a =0, b = 1, next;

    for (int i = 1; i<= n; i++){
        printf("%d ", a);
        next = a+b;
        a = b;
        b = next;
    }
    printf("\n");
}


int main(){
    int n;
    printf("how many terms of fibonacci series are needed? ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}

