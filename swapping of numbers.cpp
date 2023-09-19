#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any two numbers:");
	scanf("%d%d", &a,&b);
	c=a;
	a=b;
	b=c;
	printf("numbers after swapping are %d and %d", a,b);
	return 0;
}
