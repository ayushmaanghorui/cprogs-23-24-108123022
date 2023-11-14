#include<stdio.h>
int main()
{
	char str[100];
	int c=0,k=0,e=0,f=0,i;
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]==' ')
		{
			c++;
		}
	}
	printf("%d",c+1);
}
