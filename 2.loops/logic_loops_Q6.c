/* Q6 Accept a numbers from user and check if it is pallandrome or not*/

#include <stdio.h>
int main()
{
	int a,rev=0,num,pall;
	printf("Enter the number\n");
	scanf_s("%d",&a);
	pall=a;
	while (a>0) //121
	{
		num=a%10; //121%10=1
		a=a/10;		//121/10=12
		rev=10*rev+num;		//0+1=1
	}
	printf("Reverse: %d",rev);

	if(rev==pall)
			printf("\nPallandrome");
	else
		printf("\nNot a Pallandrome");

getch();
return 0;
}