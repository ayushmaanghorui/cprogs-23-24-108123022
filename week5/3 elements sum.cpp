#include<stdio.h>
int main()
{
	int i,j,n,sum,k;
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
			for(k=j+1;k<n;k++)
			{
				if(sum==a[i]+a[j]+a[k])
				{
					printf("%d %d %d",a[i],a[j],a[k]);
				}
			}
		}
	}
}