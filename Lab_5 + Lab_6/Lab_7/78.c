#include<stdio.h>

int power(int, int);
int power(int a, int b){
    int pow = 1;
    for (int i = 0; i < b; i++){
        pow = pow*a;
    }
    return pow;
}


int count(int);
int count(int n){
    int count = 0;
    for (int i = 1; n!= 0; i++){
        n = (n-(n%10))/10;
        count++;
    }
    return count;


}
void armstrong(int n){
    int n_1;
    int calc = 0;
    n_1 = n;
    int raised = count(n);

    for(int i = 1; n != 0; i++){
        calc = calc + power(n%10, raised);
        n = (n - n%10)/10;
    }



    if (calc == n_1){
        printf("number %d is an armstrong", n_1);
    }else{
        printf("number %d is not an armstrong", n_1);
    }
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}