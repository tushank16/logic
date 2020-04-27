/*
a
ab
abc
*/
#include <stdio.h>
int main()
{
	int i,j=97,n,no=65;
	printf("Enter the no. of rows:");
	scanf("%d",&n);
	n=n+j;
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=97;j<i;j++)
		{
			printf("%c",j);
		}	
		printf("\n");
	}
	return 0;
}