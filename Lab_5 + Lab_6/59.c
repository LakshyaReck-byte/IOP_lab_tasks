#include<stdio.h>

int main(){
    int arr_1[10];
    int arr_2[10];
    int c;

    for (int i = 0; i<10; i++){
        printf("enter first array element: ");
        scanf("%d", &arr_1[i]);
    }
    for (int i = 0; i<10; i++){
        printf("enter second array element: ");
        scanf("%d", &arr_2[i]);
    }
    for(int i = 0; i<10; i++){
        c = arr_1[i];
        arr_1[i] = arr_2[i];
        arr_2[i] = c;
    }

    printf("updated array values\n");

    for(int i = 0; i<10; i++){
        printf("%d ", arr_1[i]);
    }
    printf("\n");

    for(int i = 0; i<10; i++){
        printf("%d ", arr_2[i]);
    }
    return 0;
}

/*
c = a
a = b
b = c
*/