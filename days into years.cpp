#include<stdio.h>
int main()
{
	
	float years,days;
	printf("Enter days: ");
	scanf("%f", &days);
	
	years=days/365;
	printf("%f years", years);
	return 0;
}
