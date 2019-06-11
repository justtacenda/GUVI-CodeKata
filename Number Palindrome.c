//Number is a Palindrome or Not
#include<stdio.h>
int main()
{
	int num,temp,rem,sum;
	sum=0;
	scanf("%d",&num);
	temp=num;
	while(temp)
	{
		rem=temp%10;
		sum=sum*10+rem;
		temp/=10;
	}
	if(sum==num)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
