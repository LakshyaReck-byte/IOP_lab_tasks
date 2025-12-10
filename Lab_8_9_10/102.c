#include<stdio.h>

int main(){
    FILE *file = fopen("SVNITSTUDENT.DAT", "r");
    char c;
    int chars = 0; 
    int words = 0;
    int lines = 0;
    int inword = 0;
    while((c = fgetc(file)) != EOF){
        chars++;

        if(c == '\n'){
            lines++;
        }

        if(c == ' ' || c== '\n' || c == '\t'){
            inword = 0;
        }else if(inword == 0){
            inword = 1;
            words++;
        }
    }

    lines++;
    chars++;
    printf("\n characters: %d\n words: %d\n lines: %d", chars, words, lines);
    return 0;
}