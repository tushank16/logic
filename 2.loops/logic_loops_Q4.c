/* Q4 Accept a numbers from user calculate the sum of digits of that no*/

#include <stdio.h>
int main()
{
	int a,sum=0,num;
	printf("Enter the number\n");
	scanf_s("%d",&a);
	
	while (a>0) //121
	{
		num=a%10; //121%10=1
		a=a/10;		//121/10=12
		sum=sum+num;		//0+1=1
	}
	printf("%d",sum);
getch();
return 0;
}