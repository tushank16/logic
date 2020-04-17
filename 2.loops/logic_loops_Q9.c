/* Q9 Accept a numbers from user and check if it is armstrong no or not*/

#include <stdio.h>
int main()
{
	int a,sum=0,num,amg;
	printf("Enter the number\n");
	scanf_s("%d",&a);
	amg=a;
	while (a>0) 
	{
		num=a%10;
		num=num*num*num;	
		a=a/10;		
		sum=sum+num;	
	}
	printf("Sum of cubes: %d",sum);

	if(sum==amg)
			printf("\n Armstrong no");
	else
		printf("\nNot a Armstrong  no");

getch();
return 0;
}