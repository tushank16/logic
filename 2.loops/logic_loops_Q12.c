/* Q12 Accept a number from user and print those many no after that number*/

#include <stdio.h>
int main()
{
	int a, i;
	printf("Enter a no:");
	scanf_s("%d",&a);
	for (i=a; i<a+a; i++)
		printf("%d, ",i+1);
	
getch();
return 0;
}