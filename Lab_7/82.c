#include<stdio.h>

int factorial (int n){
    int ans = 1;
    for (int i = 1; i<= n; i++){
        ans *= i;
    }
    return ans;
}

int combination (int n, int r){
    return ((factorial(n)/(factorial(r)*factorial(n-r))));
}

int main(){
    int n, r;
    printf("enter value of n: ");
    scanf("%d", &n);
    printf("enter value of r: ");
    scanf("%d", &r);

    int result = combination(n, r);
    printf("%d", result);
    return 0;
}