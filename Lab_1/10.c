#include<stdio.h>

int main(){
	int m, p, c, e;
	printf("Enter maths marks: ");
	scanf("%d", &m);
	printf("Enter physics marks: ");
	scanf("%d", &p);
	printf("Enter chemistry marks: ");
	scanf("%d", &c);
	printf("Enter entrance marks: ");
	scanf("%d", &e);
	float cut_off = m/2 + p/2 + c/2 + e;
	printf("the cutoff marks is: %f", cut_off);
	return 0;
}
