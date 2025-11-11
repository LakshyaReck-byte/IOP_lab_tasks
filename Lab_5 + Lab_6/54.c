#include<stdio.h>

int main(){
    int arr[10];
    int sum = 0;
    for(int i = 0; i<10; i++){
        printf("enter array element: ");
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<10; i++){
        sum += arr[i];
    }

    printf("sum of all elements of the array is %d", sum);
    return 0;
}