//Armstrong Numbers Between 2 intervals
#include<stdio.h>
int main()
{
	int int1,int2,rem,sum,temp;
	scanf("%d %d",&int1,&int2);
		while(int1<int2)
		{
			sum=0;
			int1++;
			temp=int1;
			while(temp)
			{
				rem=temp%10;
				sum=sum+(rem*rem*rem);
				temp/=10;
			}
			if(int1==sum)
			{
				printf("%d ",sum);
			}
		}

	return 0;
}
