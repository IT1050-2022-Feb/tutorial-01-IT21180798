/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include<stdio.h>
int main(void)
//start main function
{
	int number,v,total=0;
	
	printf("Enter number:");
	scanf("%d",&number);
	
	for(v=0;v<=number;v++)
	{
		total=total+v;
	}
	printf("\nSum of the Numbers:%d",total);
	
	return 0;
}//end main function

