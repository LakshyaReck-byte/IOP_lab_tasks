#include<stdio.h>

int fibo(int n);
int fibo(int n){
    if(n ==0){
        return 0;
    }
    else if(n ==1){
        return 1;
    }
    else{
        return fibo(n-1) + fibo(n -2);
    }
}

int main(){
    int n;
    printf("how many terms of fibonacci series are needed? ");
    scanf("%d", &n);
    for (int i=0; i<=n-1; i++){
        printf("%d ", fibo(i));
    }
    return 0;
}