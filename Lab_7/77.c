#include<stdio.h>

void palindrome (int n){
    int rev = 0;
    int original = n;

    while(n != 0){
        rev = rev*10 + n%10;
        n = (n - (n%10))/10;
    }
    if (original == rev){
        printf ("%d is a palindrome", original);
    }
    else{
        printf("%d is not a palindrome", original);
    }
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    palindrome(n);
    return 0;
}

    