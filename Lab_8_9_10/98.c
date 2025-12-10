#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int *A = (int *)malloc(9 * sizeof(int));
    int *B = (int *)malloc(9 * sizeof(int));
    int *C = (int *)malloc(9 * sizeof(int));

    int tempA[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tempB[3][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            *(A + i*3 + j) = tempA[i][j];
            *(B + i*3 + j) = tempB[i][j];
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            *(C + i*3 + j) = 0;
            for(int k = 0; k<3; k++){
                *(C + i*3 + j) += (*(A + i*3 + k)) * (*(B + k*3 + j));
            }
        }
    }

    printf("After product: \n");

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", *(C + i*3 + j));
        }
        printf("\n");
    }
    return 0;
}