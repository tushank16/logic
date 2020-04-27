
/*
 **
*  *
 **
 *
#include <stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the no. of rows:");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			if(j+i==3 || j-i==1 || i-j==1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
*/