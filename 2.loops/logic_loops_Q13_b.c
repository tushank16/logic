/* Q13 Accept a start and end range from the user and print all even no between them*/

#include <stdio.h>
int main()
{//EVEN NUMBERS
	int a,b;
	printf("Enter Start no:");
	scanf_s("%d",&a);
	printf("Enter End no:");
	scanf_s("%d",&b);
	printf("The EVEN no. between %d and %d: ",a,b);
	if(a%2!=0)
		a=a+1;
	if (b%2!=0)
		b=b-1;	
	do
	{
		printf("%d, ",a);
		a=a+2;
	} while (a<=b);
	getch();
return 0;
}