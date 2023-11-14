#include<stdio.h>
int main()
{
	char str[100];
	int c=0,k=0,e=0,f=0,i;
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			c++;
		else
			if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0')
			{
				k++;
					
			}
			else 
			{
				if(str[i]==' ')
				{
					e++;
				}
				else
				{
					f++;
				}
			}
					
	}
	printf("Vowels %d\n",c);
		printf("digits %d\n",k);
			printf("white spaces %d\n",e);
				printf("consonants %d\n",f);
}
