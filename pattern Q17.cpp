#include<stdio.h>
int main()

{
	int i,j,n,c=1;
	printf("Enter n : ");
	scanf("%d", &n);
	
	
	for(i=1;i<=n;i++)
	{
		
		
		for(j=1;j<=i;j++)
		{
			printf("%d\t",c);
			c++;
				
		}
	
	printf("\n");
	}
	
		
}




