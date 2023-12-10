#include<stdio.h>
int main()
{
	int n,i,j,c;
	printf("Enter n : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]!=a[j])
			{
					c=a[j];
					break;
			}
		}
		break;
	}
	printf("First non repeating element is %d",c);
}