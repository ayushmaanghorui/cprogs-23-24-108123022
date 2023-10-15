#include<stdio.h>
int main()
{
	int i,j,n,a;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",a);
			
		}
	a++;
	printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
			printf("%d",a-1 );
			
		}
	a--;
	printf("\n");
	}	
}