//Calculating power
#include<stdio.h>
int main()
{
	int num,power,itr,result;
	result=1;
	scanf("%d %d",&num,&power);
	for(itr=0;itr<power;itr++)
	{
		result=result*num;
	}
	printf("%d",result);
	return 0;
}
