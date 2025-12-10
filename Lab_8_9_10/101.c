#include<stdio.h>

int main(){
    FILE *file = fopen("SVNITSTUDENT.DAT", "a");
    char line[50];

    printf("enter a string: ");
    fgets(line, sizeof(line), stdin);

    fprintf(file, "\n");
    fprintf(file, line);

    fclose(file);
    printf("successfully written :D");
    return 0;
}