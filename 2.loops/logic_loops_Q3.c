/* Q 3 Accept 10 numbers from user count how many are positive negative and zero*/

#include <stdio.h>
int main()
{
	int a,i,positivecount=0,negativecount=0,zerocount=0;
	for (i=0;i<10;i++)
	{
		printf("Enter the number\n");
		scanf_s("%d",&a);
		if (a>0)
			positivecount++;
		else if (a<0)
			negativecount++;
		else 
		{
			++zerocount;
		}
			
	}
	printf("+ve count: %d, -ve count: %d, 0 count:%d",positivecount,negativecount,zerocount);
	getch();
	return 0;
}