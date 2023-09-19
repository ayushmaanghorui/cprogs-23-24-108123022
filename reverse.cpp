#include<stdio.h>
int main()
{
	int num,revnum=0;
	printf("Enter any number : ");
	scanf("%d", &num);
	for( ;num>0;num=num/10)
	{
		revnum=revnum*10+num%10;
	}
	printf("Reverse of number is %d", revnum);
	return 0;
}
