#include<stdio.h>

int main(){
    int n;
    printf("how many rows you want? ");
    scanf("%d", &n);
    for (int i = 1; i<= n; i++){
        for(int j = (n-1); j >= i; j--){
            printf(" ");
        }

        for (int j = 1; j <= i; j++){
            printf("%d", j);
        }

        for(int j = 1; j< i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

/*
   1
  121
 12321
1234321
*/