#include<Stdio.h>

#define BIGGEST(a, b) ((a>b)? a:b)

int main(){
    int n1, n2;
    printf("enter first number: ");
    scanf("%d", &n1);
    printf("enter second number: ");
    scanf("%d", &n2);

    int largest = BIGGEST(n1, n2);
    printf("the biggest number is: %d", largest);
    
    return 0;
}