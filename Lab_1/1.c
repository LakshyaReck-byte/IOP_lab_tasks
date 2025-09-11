#include<stdio.h>

int main(){
	float p, r, t;
	printf("Enter principal: ");
	scanf("%f", &p);
	printf("Enter rate of interest: ");
	scanf("%f", &r);
	printf("Enter time: ");
	scanf("%f", &t);
	float SI = (p*r*t)/100;
	printf("the simple interest is %0.2f", SI);
	return 0;
}
