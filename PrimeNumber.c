//Prime Number or not
#include<stdio.h>
#include<math.h>
int main()
{
	int num,sqroot,itr,flag;
	flag=0;
	scanf("%d",&num);
	sqroot=sqrt(num);
	for(itr=2;itr<=sqroot;itr++)
	{
		if(num%itr==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
