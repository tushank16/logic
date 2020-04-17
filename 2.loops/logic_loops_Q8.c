/* Q8 Accept a numbers from user and check if it is special no or not*/

#include <stdio.h>
int main()
{
	int a,i,sum=0,num,special;
	printf("Enter the number\n");
	scanf_s("%d",&a);
	special=a;
	while (a>0) //121
	{
		num=a%10;
		if (num==0 || num==1 )
			num=1;
		if(num>1)
		{
			for (i=num-1;i>1;i--)
			{
				num=num*i;			
			}
		}
			a=a/10;		
		sum=sum+num;		
	}
	printf("Sum of Factorials: %d",sum);

	if(sum==special)
			printf("\n Special no");
	else
		printf("\nNot a Special no");

getch();
return 0;
}