//Armstrong NUumber or Not
#include<stdio.h>
int main()
{
	int num,sum,rem,temp;
	sum=0;
	scanf("%d",&num);
	temp=num;
	while(temp)
	{
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp/=10;
	}
	if(num==sum)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
