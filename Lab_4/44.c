#include<stdio.h>

int main(){
    int unit, price;
    printf("enter the consumption unit: ");
    scanf("%d", &unit);
    if (unit >= 0 && unit <= 200){
        price = 0.5*unit;
    } else if (unit >= 201 && unit <= 400){
        price = 100 + 0.65*(unit - 200) + (0.5*200);
    }else if (unit >= 401  && unit < 600){
        price = 230 + 0.8*(unit - 400) + 0.65*(200) + (0.5*200);
    }else if (unit >600){
        price = 425 + 1.25*(unit - 600) + 0.8*200 + 0.65*200 + 0.5*200;
    }

    printf("price : %d", price);
    return 0;
}