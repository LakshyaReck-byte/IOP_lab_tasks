#include<stdio.h>

int main(){
	char a = 'a';
	char b = 'b';
	printf("initial values of a and b: %c, %c\n", a, b);
	char c = a;
	a = b;
	b = c;
	printf("final values of a and b: %c, %c", a, b);
	
	return 0;
}
