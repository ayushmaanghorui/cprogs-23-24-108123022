#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			{
				printf(" *");
			}
	
		
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" *");
		}
	printf("\n");
	}
	return 0;
}
