/*
32123
 323
  3
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
		for(j=n;j>=i;j--)
		{
			printf("%d",j);
		}	
		for(k=i+1;k<=n;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}