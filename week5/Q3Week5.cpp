#include<stdio.h>
int main()
{
	int i,n,j,c;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Enter elements: ");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				c=a[j];
				a[j]=a[i];
				a[i]=c;	
			}	
		}		
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
