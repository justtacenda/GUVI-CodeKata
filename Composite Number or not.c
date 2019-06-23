//Check whether a number is composite
#include<stdio.h>
#include<math.h>
int main()
{
	int num,itr,sqr;
	scanf("%d",&num);
	sqr=sqrt(num);
	for(itr=2;itr<=sqr;itr++)
	{
		if(num%itr==0)
		{
			printf("yes");
			break;
		}
	}
	if(itr==sqr+1)
	printf("no");
	return 0;
}
