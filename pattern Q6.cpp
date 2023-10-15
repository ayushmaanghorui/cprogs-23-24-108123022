#include<stdio.h>
int main()
{
	int i,j,c=1,n;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("%d\t",c);
			c++;
		}
	printf("\n");
	}
}