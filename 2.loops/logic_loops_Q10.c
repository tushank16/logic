/* Q10 go on accepting numbers from user till the user enters 0 and calculate the sum of these numbers*/

#include <stdio.h>
int main()
{
	int a, sum=0;
	printf("Enter the numbers to calculate the sum (Enter 0 to stop adding)\n");
	do
	{
		printf("Enter the no. :");
		scanf_s("%d",&a);
		sum=sum+a;

	} while (a!=0);
	printf("SUM : %d",sum);
	getch();
return 0;
}