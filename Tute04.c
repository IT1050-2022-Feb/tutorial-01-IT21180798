/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/


#include<stdio.h>
int min(int n1,int n2);
int max(int n1,int n2);
int multi(int n1,int n2);
int main(void)
//start main function
{
	int n1,n2;
	
	printf("Enter a Value for Number 1:");
	scanf("%d",&n1);
	
	printf("Enter a Value for Number 2:");
	scanf("%d",&n2);
	
	printf("%d",min(n1,n2));
	printf("%d",max(n1,n2));
	printf("%d",multi(n1,n2));
	
	return 0;
}//end main function
int min(int n1,int n2)
{
	int min;
	if(n1<n2)
	{
		min=n1;
	}
	else
	{
		min=n2;
	}
	
	return min;
}
int max(int n1,int n2)
{
	int max;
	if(n1<n2)
	{
		max=n1;
	}
	else
	{
		max=n2;
	}
	
	return max;
}
int multi(int n1,int n2)
{
	int multi;
	if(n1<n2)
	{
		multi=n1;
	}
	else
	{
		multi=n2;
	}
	
	return multi;
}
