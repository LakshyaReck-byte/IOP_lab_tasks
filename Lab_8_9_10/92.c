#include<stdio.h>


void max (int arr[], int n){
    int *p = arr;
    int max = *p;

    for(int i = 1; i<n; i++){
        if(max < *(p+i)){
            max = *(p+i);
        }
    }
    printf("the max element is %d", max);
}

int main(){
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("enter elements: \n");
    for(int i = 0; i<n; i++){
        printf("%d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    max(arr, n);
    return 0;
}