#include<stdio.h>
int main()
{
	int num,revnum=0,temp;
	printf("Enter any number : ");
	scanf("%d", &num);
	temp=num;
	for( ;num>0;num=num/10)
	{
		revnum=revnum*10+num%10;
	}
	if(temp==revnum)
	{
		printf("Given number is palindrome");
	
	}
	else
	{
		printf("given number is not a palindrome");
	}
	
}
