#include<stdio.h>

int main(){
    int count[6] = {0, 0, 0, 0, 0, 0};
    int n;
    printf("how many votes? ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        printf("i give my vote to:(1/2/3/4/5) ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<n; i++){
        if(arr[i] == 1){
            count[0] += 1;
        }
        else if (arr[i]==2){
            count [1] += 1;
        }
        else if (arr[i]==3){
            count [2] += 1;
        }
        else if (arr[i]==4){
            count [3] += 1;
        }
        else if (arr[i]==5){
            count [4] += 1;
        }
        else{
            count[5] += 1;
        }
    }

    for(int i = 0; i<5; i++){
        printf("the number of votes to candidate %d are %d\n", i+1, count[i]);
    }
    printf("and the number of spoilt ballots are %d", count[5]);
    return 0;
}