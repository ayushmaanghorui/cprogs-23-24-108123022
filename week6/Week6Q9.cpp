#include<stdio.h>
int main()
{
	int i,c=0;
	char name[20];
	printf("Enter any word: ");
	gets(name);
	for(i=0;name[i]!=NULL;i++)
	{
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
			printf("%c\t",name[i]);	
	}
} 
