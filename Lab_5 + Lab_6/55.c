#include<stdio.h>

int main(){
    int arr[10];
    int sum_even = 0;
    int sum_odd = 0;

    for(int i = 0; i<10; i++){
        printf("enter array element: ");
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<10; i++){
        if (arr[i]%2 == 0){
            sum_even += arr[i];
        }
        else{
            sum_odd += arr[i];
        }
    }

    printf("sum of even elements of the array is %d\n", sum_even);
    printf("sum of odd elements of the array is %d", sum_odd);
    return 0;
}