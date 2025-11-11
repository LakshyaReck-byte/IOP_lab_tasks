#include<stdio.h>


int fact (int);
int fact (int n){
    
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    printf("how many values ye want?: ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++){
        printf ("%d/%d ", i, fact(i));
    }
    return 0;
}