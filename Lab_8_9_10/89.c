#include<stdio.h>

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[50];
    int *p1 = arr1;
    int *p2 = arr2;

    int n = sizeof(arr1)/sizeof(arr1[0]);

    for(int i=0; i<n; i++){
        *(p2 + i) = *(p1 + n -i-1);
    }

    printf("After copying: \n");
    for(int i = 0; i<n; i++){
        printf("%d ", *(p2++));
    }
    return 0;
}