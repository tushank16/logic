/*
  0
 101
21012*/
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
		for(j=i-1;j>=0;j--)
		{
			printf("%d",j);
		}	
		for(k=1;k<i;k++)
		{
			printf("%d",k);
		}	
		printf("\n");
	}
	return 0;
}