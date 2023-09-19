#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the last no. upto which you want to calculate the sum : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("Sum is %d", sum);
	return 0;
}
