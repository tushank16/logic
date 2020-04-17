/* Q5 Accept a numbers from user and reverse it*/

#include <stdio.h>
int main()
{
	int a,rev=0,num;
	printf("Enter the number\n");
	scanf_s("%d",&a);
	
	while (a>0) 
	{
		num=a%10; 
		a=a/10;		
		rev=10*rev+num;		
	}
	printf("%d",rev);
getch();
return 0;
}