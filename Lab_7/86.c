#include<stdio.h>
#include<string.h>

void length (char arr[]){
    printf("enter a line of text: ");
    fgets(arr, 100, stdin);
    int k = strlen(arr);
    printf("the line have %d characters", k-1);

}
int main(){
    char arr[100];
    length (arr);
    return 0;
}

