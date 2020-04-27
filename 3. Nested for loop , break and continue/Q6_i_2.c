/*
32123
 212
  1
*/
#include <stdio.h>
int main()
{
	int i,j,k,s,n;
	printf("Enter the no. of rows:");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(s=1;s<i;s++)
		{
			printf(" ");
		}	
		for(j=n-i+1;j>=1;j--)
		{
			printf("%d",j);
		}	
		for(k=2;k<=n-i+1;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}