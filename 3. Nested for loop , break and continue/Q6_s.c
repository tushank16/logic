/*
ABCDEFGHIJKLMNOPQRST
ACEGIKMOQS
ADGJMPS
AEIMQ
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
    
    for(j=65;j<=84;)
    {
        printf("%c",j);
        j=j+i;
        }
    printf("\n");
    }
}