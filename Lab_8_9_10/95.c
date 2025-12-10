#include<Stdio.h>

typedef struct company{
    int emp_number;
    char emp_name[50];
    int basic_pay;
}e;

int main(){
    e employ[50];
    e *p = employ;

    int n;
    printf("enter number of employeer: ");
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        printf("\nemployee %d\n", i+1);
        printf("employee number: ");
        scanf("%d", &p->emp_number);
        printf("employee name: ");
        scanf("%s", &p->emp_name);
        printf("basic pay: ");
        scanf("%d", &p->basic_pay);

        p++;
    }
    p = employ;

    for(int i = 0; i<n; i++){
        printf("\n employee %d\n", i+1);
        printf("number     : %d\n", p->emp_number);
        printf("name       : %s\n", p->emp_name);
        printf("basic pay  : %d\n", p->basic_pay);
        p++;
    }

    return 0;    
}