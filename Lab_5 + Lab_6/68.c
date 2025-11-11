#include<stdio.h>

int main(){
    int arr1[3][3], arr2[3][3], arr3[3][3];

    printf("for first matrix: \n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("enter value at %d%d: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("for second matrix: \n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("enter value at %d%d: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            arr3[i][j] = 0;
            for(int k = 0; k<3; k++){
                arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }

    printf("aftrr multiplication: \n");

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}