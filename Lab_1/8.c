#include<stdio.h>

int main(){
	int a = 31558150;
	int day = a/(24*60*60);
	int hours = (a-day*24*3600)/(60*60);
	int minutes = (a - day*24*3600 - hours*3600)/60;
	printf("%d days, %d hours, %d minutes ", day, hours, minutes);
	return 0;
}
