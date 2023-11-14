#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0,j,n;
	char name[20],org[20];
	char a;
	printf("Enter any word : ");
	gets(name);
	for(i=0,j=0;name[i]!=NULL,org[j]!=NULL;i++,j++)
	{
		org[j]=name[i];
		
	}
	for(i=0;name[i]!=NULL;i++)
	{
		c++;
	}
	for(i=0;i<=(c-1)/2;i++)
	{
		a=name[i];
		name[i]=name[c-i-1];
		name[c-i-1]=a;
		
	}
	for(i=0,j=0;name[i]!=NULL,org[j]!=NULL;i++,j++)
	{
		if(org[j]==name[i])
		{
			printf("Palindrome");
			break;
		}
		else
		{
			printf("not a palindrome");
			break;
		}
		
	}
}
	
	
