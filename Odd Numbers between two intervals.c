//Odd numbers in the interval
#include<stdio.h>
int main()
{
	int int1,int2,itr;
	scanf("%d %d",&int1,&int2);
	for(itr=int1+1;itr<int2;itr++)
	{
		if(itr&1!=0)
		printf("%d ",itr);
	}
	return 0;
}
