#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter the no. of which you want to calculate the factorial : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("Factorial is %d", fact);
	return 0;
}
