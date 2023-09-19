#include<stdio.h>
int main()
{
	char alpha;
	printf("Enter any alphabet: ");
	scanf("%c", &alpha);
	
	if(alpha>='a'&&alpha<='z')
		printf("lowercase");
	else
		if(alpha>='A'&&alpha<='Z')
			printf("uppercase");
		else
			printf("invalid alphabet");
	return 0;
}
