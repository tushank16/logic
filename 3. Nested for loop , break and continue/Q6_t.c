/*
*
* * 
*   *
* * * *
 */
#include <stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the no. of rows:");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1 || j==i)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		printf("* ");
	}
	printf("\n");
	return 0;
}