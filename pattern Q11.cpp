#include<stdio.h>
int main()
{
	int n,i,j;
	char ch;
	printf("Enter n : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		ch='A';
		for(j=0;j<=i;j++)
		{
			printf("%c",ch);
			ch++;
		}
	printf("\n");
	}
}