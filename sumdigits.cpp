#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("Enter a number : ");
	scanf("%d", &num);
	for( ;num>0;num=num/10)
	{
		sum+=num%10;
	}
	printf("Sum is %d", sum);
}
