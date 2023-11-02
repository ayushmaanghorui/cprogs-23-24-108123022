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
	for(i=0;i<n/2;i++)
	{
		c=a[2*i];
		a[2*i]=a[2*i+1];
		a[2*i+1]=c;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
	

