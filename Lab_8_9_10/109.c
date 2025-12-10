#include<stdio.h>

int main(){
    int num = 10;
    int *ptr;
    ptr = &num;
    
    printf("Before modification: %d\n", num);
    
    *ptr = 25;

    printf("Afrer modification: %d", num);
    
    return 0;
}