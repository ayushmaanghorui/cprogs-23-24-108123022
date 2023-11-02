#include<stdio.h>
int main()
{
	int num,temp,revnum=0,last,first;
	printf("Enter any no. : ");
	scanf("%d",&num);
	temp=num;
	for( ;num>0;num=num/10)
	{
		last=num%10;
	}
	for( ;temp>0;temp=temp/10)
	{
		revnum=revnum*10+temp%10;
	}
	for( ;revnum>0;revnum=revnum/10)
	{
		first=revnum%10;
	}
	printf("%d",first+last);
}
