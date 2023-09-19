#include<stdio.h>
int main()
{
	float p,c,m,b,com,percent;
	
	printf("Enter marks in physics,chemistry,maths,bio and computer");
	scanf("%f%f%f%f%f", &p,&c,&m,&b,&com);
	
	percent=(p+c+m+b+com)/5;
	
	if(percent>=90)
		printf("Grade A");
	else
		if(percent>=80)
			printf("Grade B");
		else
			if(percent>=70)
				printf("Grade C");
			else
				if(percent>=60)
					printf("Grade D");
				else
					if(percent>=40)
						printf("Grade E");
					else
						printf("Grade F");
	return 0;
						
}
