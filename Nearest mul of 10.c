//Nearest Multiple of 10
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num%10==0)
	printf("%d",num);
	else
	printf("%d",(num+10)-(num%10));
	return 0;
}

