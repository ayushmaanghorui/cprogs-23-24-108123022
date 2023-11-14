#include<stdio.h>
int main()
{
	char str[100];
	int i,j;
	char c;
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		for(j=i+1;str[j]!=NULL;j++)
		{
			if(str[j]<str[i])
			{
				c=str[j];
				str[j]=str[i];
				str[i]=c;
			}
		}
	}
	printf("%s",str);
}
