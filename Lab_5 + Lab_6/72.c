// #include<stdio.h>

// int main(){
//     int n, m, temp;
//     printf("how many elements in array? ");
//     scanf("%d", &n);
//     int arr[n];

//     for(int i = 0; i<n; i++){
//         printf("enter array element: ");
//         scanf("%d", &arr[i]);
//     }

//     printf("how many positions to rotate the array by (right side)? ");
//     scanf("%d", &m);

//     for(int i = 0; i<m; i++){
//         temp = arr[n-1];
//         for(int j = n-1; j>0; j--){
//             arr[j] = arr[j-1];
//         }
//         arr[0] = temp;
//     }

//     printf("updated array: \n");
//     for(int i = 0; i<n; i++){
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


#include<stdio.h>

int main(){
    int n, m, temp;
    printf("how many elements in array? ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++){
        printf("enter array element: ");
        scanf("%d", &arr[i]);
    }

    printf("how many to rotate the array by (left side): " );
    scanf("%d", &m);

    for(int i =0; i<m; i++){
        temp = arr[0];
        for(int j =0; j<n-1; j++){
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }
    
    printf("updated array: \n");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

