#include<stdio.h>
int main()
{
	int i,j,n,sum;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter sum : ");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(sum==a[i]+a[j])
			{
				printf("%d %d",a[i],a[j]);
				break;
				
			}
			
		}
	}
}