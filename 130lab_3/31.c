#include<stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int original = n;
    while(n != 0){
        sum += n%10;
        n = (n - n%10)/10;
    }
    printf("sum of individul digits of %d is %d", original, sum);
    return 0;
}