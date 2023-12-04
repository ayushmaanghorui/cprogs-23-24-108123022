#include<stdio.h>
int s(int n,int a,int b,int c)
{
	
	if(n==1)
	{
		return a;
	}
	else
	{
		if(n==2)
		{
			return b;
		}
		else
		{
			if(n==3)
			{
				return c;
			}
			else
			{
				return s(n-1,a,b,c)+s(n-2,a,b,c)+s(n-3,a,b,c);
			}
		}
	}
}
int main()
{
	int n,a=1,b=2,c=3;
	printf("Enter n: ");
	scanf("%d",&n);
	 s(n,a,b,c);
	int p=s(n,a,b,c);
	printf("%d",p);
}