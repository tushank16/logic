/* Q15 Accept a no. the user and print the fibonacci series till that number*/

#include <stdio.h>
int main()
{
	int a=0,b=1,c=1,n;
	printf("Enter the no:");
	scanf_s("%d",&n);
	printf(" %d ",a);
	for(;c<=n;)
	{
		c=a+b;
		printf(" %d ",b);
		a=b;
		b=c;
	}
	getch();
return 0;
}