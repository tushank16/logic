/*
  1
 121
12112*/
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
		for(k=1;k<=i;k++)
		{
			if(k%2==0)
				printf("2");
			else
				printf("1");
		}	
		for(j=i-1;j>=1;j--)
		{
			if(j%2==0)
				printf("2");
			else
				printf("1");
		}	
		
		printf("\n");
	}
	return 0;
}