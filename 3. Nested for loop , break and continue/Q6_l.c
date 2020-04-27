/*
zyxyz
 zyz
  z
*/
#include <stdio.h>
int main()
{
	int i,j,z,z1,k,s,n;
	printf("Enter the no. of rows:");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{  
		z=122;
		for(s=1;s<i;s++)
		{
			printf(" ");
		}	
		for(j=n;j>=i;j--)
		{
			printf("%c",z);
			z1=z--;
		}	
		for(k=i+1;k<=n;k++)
		{	
			printf("%c",z1+1);
			z1++;
		}
		printf("\n");
	}
	return 0;
}
