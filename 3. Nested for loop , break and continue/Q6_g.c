/*
  1
 121
12321*/
#include <stdio.h>
int main()
{
	int i,j,k,s,n;
	printf("Enter the no. of rows:");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(s=n-i+1;s>0;s--)
		{
			printf(" ");
		}	
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}	
		for(k=i-1;k>0;k--)
		{
			printf("%d",k);
		}	
		printf("\n");
	}
	return 0;
}