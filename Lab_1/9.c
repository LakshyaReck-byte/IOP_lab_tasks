#include<stdio.h>

int main(){
	int h, m, s;
	printf("Enter hours: ");
	scanf("%d", &h);
	printf("Enter minutes: ");
	scanf("%d", &m);
	printf("Enter seconds: ");
	scanf("%d", &s);
	printf("total seconds are: %d", h*3600 + m*60 + s);
	return 0;
}
