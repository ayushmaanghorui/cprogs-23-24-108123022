#include<stdio.h>
int main()
{
	char str[100];
	int c=0,k=0,e=0,f=0,i,j;
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		for(j=i+1;str[j]!=NULL;j++)
		{
		
			if((str[i]=='('&&str[j]==')')||(str[i]=='['&&str[j]==']')||(str[i]=='{'&&str[j]=='}'))
			{
				printf("Valid string");
				break;
			}
		}
		
	
	}
}
