#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter day, month and year : ");
	scanf("%d%d%d", &d,&m,&y);

	
	
	if(y%4==0&&(y%100!=0||y%400==0))
	
	
	{
		if(m>12&&m<1)
		{
			printf("Invalid");
		}
		if(d>31&&d<1)
		{
			printf("Invalid");
		}
		if(m==2)
		{
			if(d==29)
			{
			
				d=1;
				m=m+1;
				printf("%d %d %d", d,m,y);
			}
			else
			{
				d=d+1;
				
				printf("%d %d %d", d,m,y);
				
			}
		}
		else
		{
			if(m==1||m==3||m==5||m==7||m==8||m==10)
			{
				if(d==31)
				{
					d=1;
					m=m+1;
					printf("%d %d %d", d,m,y);
				}
				else
				{
					d=d+1;
					printf("%d %d %d", d,m,y);
					
				}
			}
			else
			{
				if(d==31)
				{
					printf("Invald");
				}
				if(d==30)
				{
					d=1;
					m=m+1;
					printf("%d %d %d", d,m,y);
				}
				else
				{
					d=d+1;
					printf("%d %d %d", d,m,y);
					
				}
				
			}
			if(m==12)
			{
				if(d==31)
				{
					d=1;
					m=1;
					y=y+1;
					printf("%d %d %d", d,m,y);
				}
				else
				{
					d=d+1;
					printf("%d %d %d",d,m,y);
				}
			}
		}
	}
	else
	{
		
		if(m>12&&m<1)
		{
			printf("Invalid");
		}
		if(d>31&&d<1)
		{
			printf("Invalid");
		}
		if(m==2)
		{
			if(d==29)
			{
				printf("Invalid");
			}
			if(d==28)
			{
			
				d=1;
				m=m+1;
				printf("%d %d %d", d,m,y);
			}
			else
			{
				d=d+1;
				
				printf("%d %d %d", d,m,y);
				
			}
		}
		else
		{
			if(m==1||m==3||m==5||m==7||m==8||m==10)
			{
				if(d==31)
				{
					d=1;
					m=m+1;
					printf("%d %d %d", d,m,y);
				}
				else
				{
					d=d+1;
					printf("%d %d %d", d,m,y);
					
				}
			}
			else
			{
				if(d==31)
				{
					printf("Invalid");
				}
				if(d==30)
				{
					d=1;
					m=m+1;
					printf("%d %d %d", d,m,y);
				}
				else
				{
					d=d+1;
					printf("%d %d %d", d,m,y);
					
				}
				
			}
			if(m==12)
			{
				if(d==31)
				{
					d=1;
					m=1;
					y=y+1;
					printf("%d %d %d", d,m,y);
				}
				else
				{
					d=d+1;
					printf("%d %d %d",d,m,y);
				}
			}
		}
	}
}
