#include<stdio.h>
int main()
{
	int i,c=0,k;
	char name[20];
	printf("Enter any word: ");
	gets(name);
	for(i=0;name[i]!=NULL;i++)
	{
		if(name[i]==' ')
		{
			k=i;
		}
	}
	for(i=0;name[i]!=NULL;i++)
	{
		if(i==0||i==k+1)
		{
			name[i]=name[i]-32;
		}

	}
	printf("%s", name);
}
