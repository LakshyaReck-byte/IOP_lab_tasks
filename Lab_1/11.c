#include<stdio.h>

int main(){
	int s;
	printf("enter total seconds: ");
	scanf("%d", &s);
	int hours = s/3600;
	int minutes = (s - hours*3600)/60;
	int seconds = (s - hours*3600 - minutes*60);
	printf("the time is %d hours, %d minutes and %d seconds", hours, minutes, seconds);
	return 0;
}
