#include<stdio.h>

int main(){
    char a[200];
    char *p;
    int count1 = 0;
    int count2 = 0;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    p = a;

    while (*p != '\0'){
        if(*p != ' ' && *p != '\n'){
            count2++;
        }
        if(*p != '\n'){
            count1++;
        }
        p++;
    }

    printf("length of string including space is %d\n", count1);
    printf("length of string excluding space is %d\n", count2);
    return 0;
}