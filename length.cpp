#include<stdio.h>
int main()
{
	int n,c=0;
	printf("Enter a number : ");
	scanf("%d", &n);
	for( ;n>0;n=n/10)
	{
		c++;
	}
	printf("Length of number is %d", c);
	return 0;
}
