#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter number of units : ");
	scanf("%f", &a);
	if(a>=0&&a<=200)
	{
		b=a*2.5;
		printf("bill is %f", b);
	}
	else
	{
		if(a<=400)
		{
		
			c=a*3.5;
			printf("bill is %f", c);
		}
		else
		{
			d=a*5;
			printf("bill is %f", d);
		}
	}
	return 0;
}
