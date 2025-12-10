#include<stdio.h>
#include<math.h>

void flip(int num, int n){
    int m = sizeof(num);
    int modify = 0;
    int new_num = 0;
    int power = m-n;

    for(int i = m-1; i>=m-n; i--){
    modify = modify*10 + num%10;
    num = (num-(num%10))/10;
    }
    new_num = num;
    for(int i = 0; i<n; i++){
        new_num *= 10;
    }
    
    new_num += modify;
    printf("flipped number is %d", new_num);
}


int main(){
    int num = 12345;
    int n;
    
    printf("enter a number: ");
    scanf("%d", &n);
    flip(num, n);

    return 0;
}