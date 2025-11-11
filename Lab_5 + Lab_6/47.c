#include<stdio.h>

int main(){
    int n;
    printf("how many rows you want?: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for (char c = 'A'; c < 'A' + i; c++){
            printf("%c", c);
            
        }
        printf("\n");
    }
    return 0;
}