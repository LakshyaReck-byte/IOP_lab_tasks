#include<stdio.h>

int main(){
    int n, key;
    int found = 0;
    printf("how many elements? ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i<n; i++){
        printf("enter array element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("which element ye want to find? ");
    scanf("%d", &key);

    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            printf("%d found at position %d", key, i+1);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("no such element.");
    }
    return 0;
}