#include<stdio.h>
int main()
{
	int n,i,c=0,e=0;
	printf("Enter n : ");
	scanf("%d",&n);
	int a[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{	if(a[i]%2!=0)
			printf("%d\t", a[i]);
	}
}