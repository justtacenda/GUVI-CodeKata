//Factorial of a Number
#include<stdio.h>
int main()
{
	int num,itr,fact;
	fact=1;
	scanf("%d",&num);
	for(itr=1;itr<=num;itr++)
	{
		fact*=itr;
	}
	printf("%d",fact);
	return 0; 
}
