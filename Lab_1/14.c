#include<stdio.h>

int main(){
	char a;
	printf("Enter a character: ");
	scanf("%c", &a);
	if (a >= 65 && a <= 90){
		printf("CAPITAL LETTER");
	}
	else if (a >= 97 && a <= 122){
		printf("small letter");
	}
	else if (a >= 48 && a <= 57){
		printf("digit");
	}
	else {
		printf("special symbol");
	}
	return 0;
}
