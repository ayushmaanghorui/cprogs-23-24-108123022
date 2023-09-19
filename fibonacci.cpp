#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d", c);
	return 0;
	
}
