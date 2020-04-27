//
/*
--**--
-*--*-
*----*
//*/
#include <stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the no. of rows:");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=0;j<2*n;j++)
		{
			if(j+i==n || j-i==n-1)
			{
				printf("*");
			}
			else
				printf("-");
		}
		printf("\n");
	}
	return 0;
}