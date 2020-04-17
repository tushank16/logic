/*Accept a no. from user and print the table of that no.*/

#include <stdio.h>
int main()
{
	int a,i;
	printf("Enter a no whose table is to be printed:\n");
	scanf("%d",&a);
	for (i = 1; i <=10 ; i++)
	{
			printf("%d x %d = %d\n",a,i, a*i);
	}
	getch();
	return 0;
}