#include<stdio.h>
int main()

{
	int i,n,j,k,c;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Enter elements: ");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter k :");
	scanf("%d",&k);
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				c=a[j];
				a[j]=a[i];
				a[i]=c;	
			}	
		}		
	}
	printf("%d th/st smallest element is %d\n",k,a[k-1]);
	printf("%d th/st largest element is %d",k,a[n-k]);
}
