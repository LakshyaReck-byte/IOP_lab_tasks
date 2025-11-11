#include<stdio.h>

int main(){
    int n, n_1;
    int count = 0;
    printf("how many elements? ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i<n; i++){
        printf("enter array element: ");
        scanf("%d", &arr[i]);
    }

    printf("which number you want to search for: ");
    scanf("%d", &n_1);

    for(int i = 0; i<n; i++){
        if(arr[i] == n_1){
            count += 1;
        }
    }

    printf("the number %d occured %d times", n_1, count);

    return 0;
}