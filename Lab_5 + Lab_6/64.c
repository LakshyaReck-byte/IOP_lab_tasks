#include<stdio.h>

int main(){
    int arr[3][3];
    int sum[3] = {0, 0, 0};
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("enter array element %d%d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            sum[i] += arr[i][j];
        }
    }



    printf("the sum of all rows of the matrix is: \n");
    for(int i = 0; i<3; i++){
        printf("%d\n", sum[i]);
    }
    return 0;
}