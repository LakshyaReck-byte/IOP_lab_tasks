#include<stdio.h>

int main(){
    char a[200];
    printf("enter a string: ");
    fgets(a, sizeof(a), stdin);
    char *p = a;
    int count = 0;

    while(*p != '\0'){
        if(*p == ' '){
            count++;
        }
        p++;
    }
    count++;
    printf("number o' words in string are: %d", count);
    return 0;
}