/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
int main(void)
//start main function
{
	int number1,number2,total;
	float avg;
	
	printf("Enter Marks of Subject 1 :");
	scanf("%d",&number1);
	
	printf("Enter Marks of Subject 2 :");
	scanf("%d",&number2);
	
	total=number1+number2;
	
	avg=total/2;
	
	printf("\nAvarage of marks %.1f",avg);
	
}//end main function