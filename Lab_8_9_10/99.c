#include<stdio.h>

int main(){
    FILE *ptr = fopen("file.txt", "r");
    int count = 0;
    char ch;

    while((ch = fgetc(ptr)) != EOF){
        if(ch >= 65 && ch <= 91){
            ch+= 32;
        }
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
    }
    fclose(ptr);

    printf("number of vowels: %d", count);
    return 0;
}