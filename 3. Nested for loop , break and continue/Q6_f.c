/*
1
21
321*/
#include <stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the no. of rows:");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("%d",j);
		}	
		printf("\n");
	}
	return 0;
}