#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));

    int num = ((rand()%100)+1);
    int count = 0;
    int n;
    for (; n!= num;){
        printf("enter number: ");
        scanf("%d", &n);
        if(n < num){
            printf("try a larger number\n");
            count += 1;
        }
        else if (n > num){
            printf("try a smaller number\n");
            count += 1;
        }
    }
    if (n == num){
        printf("congo, the number was %d\n", n);
        printf("you took %d tries", count+1);
    }
    return 0;
}