#include<stdio.h>

int main(){
    int arr_1[10];
    int arr_2[10];
    int arr_3[10];

    for (int i = 0; i<10; i++){
        printf("enter first array element: ");
        scanf("%d", &arr_1[i]);
    }
    for (int i = 0; i<10; i++){
        printf("enter second array element: ");
        scanf("%d", &arr_2[i]);
    }
    for(int i = 0; i<10; i++){
        arr_3[i] = arr_1[i] + arr_2[i];

        printf("%d ", arr_3[i]);
    }
    return 0;
}