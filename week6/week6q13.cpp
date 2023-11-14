#include<stdio.h>
int main()
{
	char str[100];
	char  arr[]={'t','h','e'};
	int i,j,c=0;
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]=='t'&&str[i+1]=='h'&&str[i+2]=='e')
		{
			c++;
		}
	}
	printf("%d",c);
}
