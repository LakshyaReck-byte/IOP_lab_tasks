#include<stdio.h>

int main(){
    int arr[10][4] = {1, 96, 57, 90, 2, 35, 8, 43, 3, 74, 75, 98, 4, 50, 61, 100, 5, 54, 65, 77, 6, 27, 96, 95, 7, 33, 7, 94, 8, 95, 89, 17, 9, 52, 84, 62, 10, 85, 37, 28};
    int marks[10];
    int high[10];
    int highest = 0;
    int id;
    printf("score card: \n");
    for(int i = 0; i<10; i++){
        for(int j = 0; j<4; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i<10; i++){
        marks[i] = 0;
        for(int j = 1; j<4; j++){
            marks[i] += arr[i][j];
        }
    }

    printf("total marks obtained by each student (with their id): \n");
    for(int i = 0; i<10; i++){
        printf("%d : %d \n", arr[i][0], marks[i]);
    }
    printf("\n");


    for(int j = 1; j<4; j++){
        int highmark = arr[0][j];
        int id = arr[0][0];
        for(int i = 1; i<10; i++){
            if(arr[i][j] > highmark){
                highmark = arr[i][j];
                id = arr[i][0];
            }
        }
        printf("the highest marks in subject %d is %d secured by roll number %d\n", j, highmark, id);
    }
    

    for(int i = 0; i<10; i++){
        if(marks[i] > highest){
            highest = marks[i];
            id = i+1;
        }
    }

    printf("\nthe overall highest score is %d, scored by roll number %d", highest, id);
    return 0;
}