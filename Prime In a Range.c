//Prime Numbers between Intervals
#include<stdio.h>
#include<math.h>
int main()
{
	int int1,int2,itr,sqroot,flag;
	scanf("%d %d",&int1,&int2);
	
	while(int1<int2)
	{
		int1++;
		flag=0;
		sqroot=sqrt(int1);
		for(itr=2;itr<=sqroot;itr++)
		{
			if(int1%itr==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d ",int1);
		}
		
	}
	
	
	return 0;
}


