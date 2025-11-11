#include<stdio.h>

int main(){
    int arr[10];
    int minindex, temp;
    for (int i = 0; i<10; i++){
        printf("enter array element: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<10; i++){
        minindex = i;

        for(int j = i+1; j < 10; j++){
            if (arr[j] < arr[minindex]){
                minindex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;

    }

    printf("after sorting\n");
    for (int i = 0; i<10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}