#include<stdio.h>
#include<string.h>

int main()
{
	int i,c=0,j,n;
	char name[20],name2[20];
	printf("Enter two  words: ");
	gets(name);
	gets(name2);
	n=strcmp(name,name2);
	if(n==0)
	{
		printf("Equal strings");
		
	}
	else
	{
		printf("Not equal");
	}
}
	
