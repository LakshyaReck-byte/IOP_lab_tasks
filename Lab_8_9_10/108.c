#include <stdio.h>

void stringCopy(char str1[], char str2[]) {
    int i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return 0;
}

void stringConcat(char str1[], char str2[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0')
        i++;

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

void stringReverse(char str[]) {
    int length = 0;
    char temp;

    while (str[length] != '\0')
        length++;

    for(int i = 0; i<length/2; i++){
        temp = str[i];
        str[i] = str[length - i -  1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char copy[100];
    char str1[] = "this is crazy";
    char str2[] = "as hell";

    // A
    stringCopy(copy, str1);
    printf("\nCopied String: %s\n", copy);

    // B
    int cmp = stringCompare(str1, str2);
    if (cmp == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // C
    stringConcat(str1, str2);
    printf("Concatenated String: %s\n", str1);

    // D
    stringReverse(str2);
    printf("Reversed Second String: %s\n", str2);

    return 0;
}