#include<stdio.h>

int main(){
    int n;
    printf("how many rows you want?: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            printf("%d", 0);
        }
        printf("%d", 1);
        for(int j = n-1; j >i; j--){
            printf("%d", 0);
        }
        printf("\n");
    }
    return 0;
}