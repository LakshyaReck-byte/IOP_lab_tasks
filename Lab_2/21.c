#include<stdio.h>

int main(){
    double a, b;
    char c;
    printf("Enter 1st number: ");
    scanf("%lf", &a);
    printf("Choose one(+, -, *, /): ");
    scanf(" %c", &c);
    printf("Enter 2nd number: ");
    scanf("%lf", &b);
    switch(c){
        case ('+'):
        printf("%0.2lf + %0.2lf = %0.2lf", a, b, a+b);
        break;
        case('-'):
        printf("%0.2lf - %0.2lf = %0.2lf", a, b, a-b);
        break;
        case('*'):
        printf("%0.2lf x %0.2lf = %0.2lf", a, b, a*b);
        break;
        case('/'):
        if(b == 0){
            printf("INVALID");
        }
        else{
            printf("%0.2lf / %0.2lf = %f", a, b, a/b);
        }
        break;
        default:
        printf("invalid statement\n");
    }
    return 0;
}

