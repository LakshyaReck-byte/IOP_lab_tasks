#include<stdio.h>

int main(){
    int sales;
    float commission;
    printf("enter sales amount: ");
    scanf("%d", &sales);

    if (sales <= 500){
        commission = (5*sales)/100.0;
    }
    else if (sales > 500 && sales <= 2000){
        commission = 35.0 + (10*(sales-500))/100.0 + (5*500)/100.0;
    }
    else if (sales > 2000 && sales <= 5000){
        commission = 185.0 + (12*(sales - 2000))/100.0 + (10*(sales-500))/100.0 + (5*500)/100.0;
    }
    else if (sales > 5000){
        commission = (12.5*sales)/100.0;
    }

    printf("the commission for your sales %d is %0.2f",sales, commission);
    return 0;
}