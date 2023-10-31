#include<stdio.h>
int main()
{
	int i,n,j=0,c;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Enter elements: ");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter k :");
	scanf("%d",&c);
	for(i=0;i<n;i++)
	{
		if(a[i]==c)
		{
			j++;
		}
	}
	printf("Occurence of %d is %d",c,j);
}
	
	
