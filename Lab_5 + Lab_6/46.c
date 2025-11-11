#include<stdio.h>
#include<stdbool.h>

int main(){
    float hatdata[11][2] = {
        {20.75, 6.5},
        {21.125, 6.75},
        {21.5, 6.875},
        {21.875, 7.0},
        {22.25, 7.125},
        {22.625, 7.25},
        {23.0, 7.375},
        {23.375, 7.5},
        {23.75, 7.625},
        {24.125, 7.75},
        {24.5, 7.875}
    };
    float head;
    bool found = false;

    printf("enter the circumference of your head, in inches: ");
    scanf("%f", &head);

    for(int i = 0; i<11; i++){
        if(head <= hatdata[i][0]){
            printf("your hat size is approx %0.3f (US/UK sizing).\n", hatdata[i][1]);
            found = true;
            break;
        }
    }
    if(!found){
        printf("sorry, your head size is outside the standard range!");
    }

    return 0;
}