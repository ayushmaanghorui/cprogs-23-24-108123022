#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	float percent;
	
	printf("Enter marks of 5 different subjects");
	scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
	
	percent=(a+b+c+d+e)/5;
	printf("percentage marks is %f%", percent);
	return 0;
}
