/*
  1
 121
12321
 121	
  1
*/
#include <stdio.h>
int main()
{
	int i,j,k,s,n,n1;
	printf("Enter the odd no of rows: ");
	scanf("%d",&n1);
	n=(n1/2)+1;
		
	for(i=1;i<=n;i++)
	{
		for(s=n-i;s>=1;s--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=i-1;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=1;i<=n-1;i++)
	{
		for(s=1;s<=i;s++)
		{
			printf(" ");
		}
		for(j=1;j<=n-i;j++)
		{
			printf("%d",j);
		}
		for(j=n-i-1;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}