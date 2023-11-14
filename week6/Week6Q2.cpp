#include<stdio.h>
int main()
{
	int i,c=0,j;
	char name[20],copy[20];
	printf("Enter any word: ");
	gets(name);
	for(i=0,j=0;name[i]!=NULL,copy[j]!=NULL;i++,j++)
	{
		copy[j]=name[i];
		
	}
	printf("%s", copy);
}
