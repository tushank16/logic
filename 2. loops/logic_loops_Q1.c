/* Q1 Accept 10 numbers from user and calculate there sum*/

#include <stdio.h>
int main()
{
	int a,i,sum=0;
	int n=10;
	for (i=0;i<n;i++)
	{
		printf("Enter the number\n");
		scanf_s("%d",&a);
		sum=sum+a;
	}
	printf("\n%d ",sum);
	getch();
	return 0;
}
