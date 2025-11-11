#include<stdio.h>

int main(){
    int n;
    printf("how many values will be given? ");
    scanf("%d", &n);
    while (n <2){
        printf("you need atleast 2 numbers!, try again: ");
        scanf("%d", &n);
    }

    int arr[n];
    int max, sec_max;

    for(int i = 0; i<n; i++){
        printf("enter number: ");
        scanf("%d", &arr[i]);
    }

    if (arr[0]>arr[1]){
        max = arr[0];
        sec_max = arr[1];
    }
    else if (arr[1] > arr[0]){
        max = arr[1];
        sec_max = arr[0];
    }

    for (int i = 2; i<n; i++){
        if (arr[i]> max){
            sec_max = max;
            max = arr[i];
        }
        else if (arr[i] != max && arr[i] > sec_max){
            sec_max = arr[i];
        }
    }

    printf ("the max and second max values are %d and %d\n", max, sec_max);
    return 0;
}