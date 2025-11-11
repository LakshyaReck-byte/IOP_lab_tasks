#include<stdio.h>

int main(){
    int n;
    printf("how many values ye want? ");
    scanf("%d", &n);

    int arr[n-1];
    int arr_1[n];
    arr_1[0] = 1;
    for (int i = 0; i<n-1; i++){
        arr[i] = 2*i+3;
    }

    for (int i = 0; i < n; i++){
        arr_1[i+1] = arr_1[i] + arr[i]; 
    }

    for (int i = 0; i<n; i++){
        printf("%d ", arr_1[i]);
    }

    return 0;
}