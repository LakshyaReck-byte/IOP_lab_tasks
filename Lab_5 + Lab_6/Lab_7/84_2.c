#include <stdio.h>

struct book{
    char name[50];
    char author[50];
    int price;
};

void readbook (struct book b[]){
    printf("enter book name: ");
    scanf("%s", b[0].name);
    printf("enter author name: ");
    scanf("%s", b[0].author);
    printf("enter book price: ");
    scanf("%d", &b[0].price);
}

void displaybook (struct book b[]){
    printf("name: %s\n", b[0].name);
    printf("author: %s\n", b[0].author);
    printf("price: %d\n", b[0].price);
}

int main(){
    struct book b[1];
    readbook(b);
    displaybook(b);
    return 0;
}