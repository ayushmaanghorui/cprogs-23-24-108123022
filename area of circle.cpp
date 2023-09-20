#include<stdio.h>
int main()
{
	float r,area;
	printf("Enter radius of the circle");
	scanf("%f", &r);
	
	area=3.14*r*r;
	
	printf("Area is %f", area);
	return 0;
}
