#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any two numbers:");
	scanf("%d%d", &a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("numbers after swapping is %d and %d", a,b);
	return 0;
}
