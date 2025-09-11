#include<stdio.h>

int main(){
	int f;
	printf("Enter temperature in Farenheit: ");
	scanf("%d", &f);
	float c = ((f - 32)*5)/9.0;
	printf("the temperature in celsius is: %f", c); 
	return 0;
}
