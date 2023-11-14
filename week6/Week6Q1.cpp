#include<stdio.h>
int main()
{
	int i,c=0;
	char name[20];
	printf("Enter any word: ");
	gets(name);
	for(i=0;name[i]!=NULL;i++)
	{
		c++;
	}
	printf("Length of word is %d",c);
}
