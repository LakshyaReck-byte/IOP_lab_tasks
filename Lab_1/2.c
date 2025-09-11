#include<stdio.h>

int main(){
	int a, b, c, d, e;
	printf("Enter marks of subject1: ");
	scanf("%d", &a);
	printf("Enter marks of subject2: ");
	scanf("%d", &b);
	printf("Enter marks of subject3: ");
	scanf("%d", &c);
	printf("Enter marks of subject4: ");
	scanf("%d", &d);
	printf("Enter marks of subject5: ");
	scanf("%d", &e);
	int total = a+b+c+d+e;
	float percentage = (total*100)/500;
	printf("The total marks are %d and the total percentage is %f", total, percentage);
	return 0;
}
