/* Q11 Accept a number from user and print the next 5 numbers*/

#include <stdio.h>
int main()
{
	int a, i;
	printf("Enter a no:");
	scanf_s("%d",&a);
	for (i=a; i<a+5; i++)
		printf("%d, ",i+1);
	
getch();
return 0;
}