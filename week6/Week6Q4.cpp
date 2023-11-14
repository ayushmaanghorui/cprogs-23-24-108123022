#include<stdio.h>
int main()
{
	int i,c=0,j;
	char name[20];
	printf("Enter any word in uppercase forms: ");
	gets(name);
	for(i=0;name[i]!=NULL;i++)
	{
		if(name[i]>='A'&&name[i]<='Z')
		{
			name[i]=name[i]+32;
		}
	}
	printf("Lower case form is %s", name);
}
	
