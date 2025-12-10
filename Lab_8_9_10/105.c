#include<stdio.h>
#include<string.h>

void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *str, int left, int right){
    int i;
    if(left == right){
        printf("%s ", str);
    }else{
        for(i=left; i<=right; i++){
            swap((str+left), (str+i));

            permute(str, left+1, right);

            swap((str+left), (str + i));
        }
    }
}


int main(){
    char str[50];

    printf("enter a string: ");
    scanf("%s", &str);

    int n = strlen(str);

    printf("\n permutations of the string are: \n");
    permute(str, 0, n-1);


    return 0;
}
