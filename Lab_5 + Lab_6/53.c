#include<stdio.h>

int main(){
    int n;
    printf("how many rows you want? ");
    scanf("%d", &n);
    int k = n/2 + 1;
    for(int i = 1; i <= k; i++){
        for(int j = k-1; j>=i; j--){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        for(int j = 1; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i<= (k-1); i++){
        for(int j = 1; j<= i; j++){
            printf(" ");
        }
        for(int j = (k-1); j>=i; j--){
            printf("*");
        }
        for(int j = (k-1); j>i; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/*
   *
  ***
 *****
*******
 *****
  ***
   *







*/