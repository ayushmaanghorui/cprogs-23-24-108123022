#include<stdio.h>
int main()
{
	int i,c=0,j;
	char name[20];
	char a;
	printf("Enter any word : ");
	gets(name);
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
	printf("%s", name);
}
