#include<stdio.h>

int main(){
	int base, height;
	printf("Enter Base length: ");
	scanf("%d", &base);
	printf("Enter Height length: ");
	scanf("%d", &height);
	float area = (base*height)/2.0;
	printf("the area is: %f", area);
	return 0;
}
