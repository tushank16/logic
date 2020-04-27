/*
  1
 21
321*/
#include <stdio.h>
int main()
{
	int i,j,s,n;
	printf("Enter the no. of rows:");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(s=n-i+1;s>1;s--)
		{
			printf(" ");
		}	
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}	
		printf("\n");
	}
	return 0;
}