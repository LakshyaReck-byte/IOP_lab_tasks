#include<stdio.h>

enum colorscode{
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLACK,
    WHITE
};

int main(){
    enum colorscode mycolor = BLUE;

    switch(mycolor){
        case RED:
            printf("#FF0000\n");
            break;
        case GREEN:
            printf("#00FF00\n");
            break;
        case BLUE:
            printf("#0000FF\n");
            break;
        case YELLOW:
            printf("#FFFF00\n");
            break;
        case BLACK:
            printf("#000000\n");
            break;
        case WHITE:
            printf("#FFFFFF\n");
            break;
        default:
            printf("unknown color\n");
    }
    return 0;
}