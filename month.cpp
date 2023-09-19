#include<stdio.h>
int main()
{
	int year,mon;
	printf("Enter year and month no. : ");
	scanf("%d%d", &year,&mon);
	if(year%4==0&&(year%100!=0||year%400==0))
		if(mon==2)
			printf("29 days");
		else
			if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
				printf("31 days");
			else
				if(mon==4||mon==6||mon==9||mon==11)
					printf("30 days");
				else
					printf("invalid month");
	else
		if(mon==2)
			printf("28 days");
		else
			if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
				printf("31 days");
			else
				if(mon==4||mon==6||mon==9||mon==11)
					printf("30 days");
				else
					printf("invalid month");
			
	return 0;	
}
