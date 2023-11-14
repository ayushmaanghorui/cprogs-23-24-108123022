#include<stdio.h>
int main()
{
	char str[100];
	int c=0,k=0,e=0,f=0,i,j;
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			printf("%c",str[i]);
			break;
		}
	}
}
