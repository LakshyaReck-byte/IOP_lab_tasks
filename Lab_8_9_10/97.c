#include<stdio.h>

int main(){
    char a[] = "aeiou AEIOU aeIOU";
    char *p = a;
    int count = 0;

    while(*p != '\0'){
        if(*p >= 65 && *p <= 90){
            *p += 32;
        }
        if(*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u'){
            count++;
        }
        p++;
    }
    printf("the number of vowels are %d", count);
    return 0;
}