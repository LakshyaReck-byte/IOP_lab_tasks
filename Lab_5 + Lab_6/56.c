#include<stdio.h>

int main(){
    int arr[10];
    int count_positive = 0;
    int count_negative = 0;
    int count_zero = 0;

    for(int i = 0; i<10; i++){
        printf("enter array element: ");
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<10; i++){
        if (arr[i] > 0){
            count_positive += 1;
        }
        else if (arr[i] < 0){
            count_negative += 1;
        }
        else{
            count_zero += 1;
        }
    }

    printf("number of positive elements in the array is %d\n", count_positive);
    printf("number of negative elements in the array is %d\n", count_negative);
    printf("number of zeroes in the array is %d", count_zero);
    return 0;
}