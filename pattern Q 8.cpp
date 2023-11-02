#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter n :");
	scanf("%d",&n);
	printf("1\n");
	for(i=1;i<n;i++)
	{
		for(j=0;j<=i-1;j++)
		{
			printf("%d*",i+1);
		}
		for(j=0;j<=i-1;j++)
		{
			printf("%d",i+1);
			break;
		}
	printf("\n");
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<=n-i-1;j++)
		{
			printf("%d*",n-i+1);
		}
		for(j=0;j<=n-i-1;j++)
		{
			printf("%d",n-i+1);
			break;
		}
	printf("\n");
	
	
		
	}
	printf("1");
}