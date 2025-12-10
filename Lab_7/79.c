#include<Stdio.h>

void swap(int arr[]){
    int temp;
    temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    
}

int main(){

    int a[2] = {3, 4};
    printf("initially: \n");

    for(int i = 0; i<2; i++){
        printf("%d ", a[i]);
    }
    swap(a);

    printf("\nfinally: \n");
    
    for(int i = 0; i<2; i++){
        printf("%d ", a[i]);
    }
    return 0;
}


