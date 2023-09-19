#include<stdio.h>
int main()
{
	char c;
	printf("Enter any character: ");
	scanf("%c", &c);
	if(c>='0'&&c<='9')
		printf("Numerical character");
	else
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
			printf("Alphabet");
		else
			printf("special character");
	return 0;
}
