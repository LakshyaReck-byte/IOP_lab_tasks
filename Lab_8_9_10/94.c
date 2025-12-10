#include<stdio.h>

int main(){
    char a1[] = "SVNITJAVA";
    char a2[50];
    char *p = a1;
    char *q = a2;

    while(*p != '\0'){
        p++;
    }
    p--;
    while(p >= a1){
        *q = *p;
        p--;
        q++;
    }
    *q = '\0';
    printf("%s", a2);
    return 0;
}