#include<stdio.h>
#include<string.h>

int main(){
    char str[50][50];
    char *p[50];
    char *temp;
    
    int n;
    printf("enter number of strings: ");
    scanf("%d", &n);
    printf("enter %d strings\n", n);
    for(int i = 0; i<n; i++){
        scanf("%s", str[i]);
        p[i] = str[i];
    }

    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(strcmp(p[i], p[j]) > 0){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("strings in ascending order: \n");
    for(int i = 0; i<n; i++){
        printf("%s \n", p[i]);
    }
    return 0;
}