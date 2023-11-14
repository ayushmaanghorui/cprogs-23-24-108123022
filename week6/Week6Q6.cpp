#include<stdio.h>
int main()
{
	int i,j,k;
	char name[20];
	
	char a;
	printf("Enter any word : ");
	gets(name);
	printf("Enter the character: ");
	scanf("%c",&a);
	for(i=0;name[i]!=NULL;i++)
	{
		if(name[i]==a)
		{
			k=i;
			break;
		}
	}
	printf("First occurence of %c is at %d",a,k+1);
}
