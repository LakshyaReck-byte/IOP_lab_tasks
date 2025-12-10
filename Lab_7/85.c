#include<Stdio.h>

int is_vowel(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        ch = ch + 32;
    }
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main(){
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);
    if (is_vowel(ch)){
        printf("%c is a vowel", ch);
    }else{
        printf("%c is not a vowel", ch);
    }
    return 0;
}