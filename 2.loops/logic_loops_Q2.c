/* Q2 accept a numbers from user and find the factorial of that no*/

#include <stdio.h>
int main()
{
	int a, i;
	printf("Enter the number\n");
		scanf_s("%d",&a);
		if(a<0)
printf("\n Please enter a valid no");
if (a==0 || a== 1 )
	printf("\n1");
if(a>1)
	{
		for (i=a-1;i>1;i--)
		{
			a=a*i;			
		}
	printf("\n%d",a);
	}
getch();
return 0;
}