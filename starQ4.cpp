#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter n  : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=n-1-i;k++)
		{
			printf("*");
		}
	printf("\n");
		
	}
}
