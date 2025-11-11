#include<stdio.h>

int main(){
    int arr[3][3];
    int max, min;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("enter array element %d%d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    max = min = arr[0][0];

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
            else if(arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }

    printf("the maximum and minimum values are %d, %d", max, min);
    return 0;
}