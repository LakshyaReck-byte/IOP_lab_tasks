#include<stdio.h>

int main(){
    int basic_salary;
    int house_rent;
    int allowance;
    int bonus;
    printf("Enter your basic salary: ");
    scanf("%d", &basic_salary);
    printf("Enter your House rent allowance: ");
    scanf("%d", &house_rent);
    printf("Enter your other allowances: ");
    scanf("%d", &allowance);
    printf("Enter your bonus amount: ");
    scanf("%d", &bonus);
    int gross_salary = basic_salary + house_rent + allowance + bonus;
    printf("Your total gross salary is: %d", gross_salary);
    return 0;
}

