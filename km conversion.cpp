#include<stdio.h>
int main()
{
	float km,m,cm,mm;
	printf("Enter value in km");
	scanf("%f", &km);
	
	m=1000*km;
	cm=100000*km;
	mm=1000000*km;
	printf("value in metre is %fm\n", m);
	printf("value in centimetre is %fcm\n", cm);
	printf("value in milimetre is %fmm\n", mm);
	return 0;
}
