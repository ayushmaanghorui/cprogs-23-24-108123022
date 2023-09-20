#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,s,c;
	printf("Enter principal amount, rate of interest and time");
	scanf("%f%f%f", &p,&r,&t);
	s=(p*r*t)/100;
	c=(p*pow(1+(r/100),t))-p;
	printf("Simple interest : %f\n", s);
	printf("Compound interest is : %f\n", c);
}
