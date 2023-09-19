#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the last no. upto which you want to print : ");
	scanf("%d",&n);
	printf("Odd numbers are : ");
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
