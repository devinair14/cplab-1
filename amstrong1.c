/*PROGRAM to print out all Armstrong numbers between 100 and 500
AUTHOR:JIJNU RAJU
DATE:06/03/19*/
#include<stdio.h>
void main()
{
int amstrong,number,copy,i,reminder,j;
for(number=100;number<=500;number++)
	{
	j=number;
	amstrong=0;
	copy=number;
	while(copy>0)
		{
		reminder=copy%10;
		amstrong=amstrong+(reminder*reminder*reminder);
		copy=copy/10;
		}
	if(amstrong==j)
		printf("%d\n",j);		
		
	}
}
