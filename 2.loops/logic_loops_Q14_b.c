#include <stdio.h>
int main()
{//ODD NUMBERS
	int a,b, i;
	printf("Enter Start no:");
	scanf_s("%d",&a);
	printf("Enter End no:");
	scanf_s("%d",&b);
	printf("The EVEN no. between %d and %d: ",a,b);
	if(a%2==0)
		a=a+1;
	else a=a+2;
	if (b%2==0)
		b=b-1;	
	else b=b-2;
	for (i=a; i<=b; )
		{
		printf("%d, ",i);
		i=i+2;
		}
getch();
return 0;
}