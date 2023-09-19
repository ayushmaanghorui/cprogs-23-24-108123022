#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three sides of a triangle : ");
	scanf("%d%d%d", &a,&b,&c);
	
	if(a==b&&b==c&&c==a)
		printf("Triangle is equilateral");
	else
		if((a==b)||(b==c)||(a==c))
			printf("Triangle is isosceles");
		else
			printf("Triangle is scalene");
	return 0;
}
