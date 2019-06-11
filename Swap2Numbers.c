//Swap 2 numbers
#include<stdio.h>
int main()
{
	int num1,num2,t;
	scanf("%d %d",&num1,&num2);
	t=num1;
	num1=num2;
	num2=t;
	printf("%d %d",num1,num2);
	return 0;
}
