#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number : ");
	scanf("%d",&num);
	printf("1");
	for( ;num%2==0;num=num/2)
	{
		printf("%d",num%2);
	} 
}
