#include<stdio.h>

int main(){
    int n, rev = 0, check;
    printf("Enter a number: ");
    scanf("%d", &n);
    int original = n;
    int original_1 = n;

    while(n != 0){
        rev = rev*10 + n%10;
        n = (n - n%10)/10;
    }
    while(original != 0 || rev != 0){
        if(original %10 == rev%10){
            check = 1;
            original = (original - original%10)/10;
            rev = (rev - rev%10)/10;
        }
        else{
            check = 0;
            break;
        }
    }
    if (check == 1){
        printf ("%d is a palindrome", original_1);
    }
    else{
        printf("%d is not a palindrome", original_1);
    }
    return 0;
}