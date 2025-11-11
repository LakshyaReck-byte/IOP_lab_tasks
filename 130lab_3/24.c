#include<stdio.h>
#include<math.h>


int main(){
    double x, n, Y;
    printf("enter value of x: ");
    scanf("%lf", &x);
    printf("enter value of n: ");
    scanf("%lf", &n);
    
    if (n == 1){
        Y = 1+x;
    }else if(n == 2){
        Y = 1 + (x/n);
    }else if(n == 3){
        Y = 1 + pow(x, n);
    }else if(n > 3 || n < 1){
        Y = 1  + (n*x);
    }

    printf("the value of Y(x, n) is %0.2lf", Y);
    return 0;
}