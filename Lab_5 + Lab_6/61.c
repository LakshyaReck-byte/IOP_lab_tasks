#include<stdio.h>

int main(){
    int arr[5];
    int temp;

    for(int i = 0; i<5; i++){
        printf("enter array element: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4 - i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("after sorting \n");
    for(int i = 0; i<5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}


/*

64 25 12 22 11 


*/