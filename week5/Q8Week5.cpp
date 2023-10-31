#include<stdio.h>
int main()
{
	int i,n,j,k,c;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Enter elements: ");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Duplicate elements are : ");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d\n",a[j]);
				break;
			}
		}
	}
}
	
	

