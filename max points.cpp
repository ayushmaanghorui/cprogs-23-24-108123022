#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any 3 points : ");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b&&a>c)
		printf("%d is maximum points", a);
	else
		if(b>c)
			printf("%d is maximum points", b);
		else
			printf("%d is maximum points", c);
	return 0;
	
}
