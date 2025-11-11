#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }

    int max, min;
    if(arr[1]<arr[0]){
        max = arr[1];
        min = arr[0];
    }else{
        max = arr[0];
        min = arr[1];
    }

    for(int i = 2; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("the max and min values are %d and %d", max, min);
    return 0;
}