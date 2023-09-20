#include<stdio.h>
int main()
{
	float a,b,c;
	int d;
	
	printf("Enter any two floating point numbers: ");
	scanf("%f%f", &a,&b);
	c=a*b;
	d=a*b;
	
	printf("float product is %f\n", c);
	printf("int product is %d", d);
	return 0;
	
}
