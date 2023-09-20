#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	
	printf("Enter any two numbers: ");
	scanf("%d%d", &a,&b);
	
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	
	printf("sum is %d\n",c);
	printf("difference is %d\n", d);
	printf("multiplication is %d\n", e);
	printf("division is %d\n", f);
	printf("modulus is %d\n", g);
	return 0;
	
}
