#include<stdio.h>

struct item{
        char item_name[100];
        int quantity;
        float price;
        float amount;
    };

void readitem(struct item *it){
    printf("enter item name: ");
    scanf("%s", it->item_name);

    printf("enter quantity: ");
    scanf("%d", &it->quantity);

    printf("enter price: ");
    scanf("%f", &it->price);

    it->amount = it->quantity * it->price;
}


int main(){
    struct item items;

    readitem(&items);
    
    printf("\n ITEM DETAILS \n");
    printf("item name: %s\n", items.item_name);
    printf("item quantity: %d\n", items.quantity);
    printf("item price: %.2f\n", items.price);
    printf("item amount: %.2f\n", items.amount);
    
    return 0;
}