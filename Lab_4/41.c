#include<stdio.h>

int main(){
    int n;
    int j = 0;
    printf("enter a number: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 1; i<= n; i++){
        if(n%i == 0){
            arr[j] = i;
            j++;
        }
    }

    for(int i = 0; i<j; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}