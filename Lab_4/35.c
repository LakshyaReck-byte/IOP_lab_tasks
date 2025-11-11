#include<stdio.h>

int count(int);
int count (int n){
    int count = 0;
    for(int i = 1; n!= 0; i++){
        n = (n - (n%10))/10;
        count += 1;
    }
    return count;
}

int main(){
    int n, n_1;
    int sum = 0;
    printf("enter a number: ");
    scanf("%d", &n);
    n_1 = n;
    int number = count(n);
    for(int i = 0; i < number; i++){
        sum += n%10;
        n = (n - (n%10))/10;
    }

    printf("the sum of digits of number %d is %d", n_1, sum);
    return 0;
}