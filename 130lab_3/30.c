#include<stdio.h>

int main(){
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int original = n;
    while(n != 0){
        rev = (rev*10 + n%10);
        n = (n - n%10)/10;
    }
    printf("given number: %d\n", original);
    printf("reversed number: %d", rev);
    return 0;
}