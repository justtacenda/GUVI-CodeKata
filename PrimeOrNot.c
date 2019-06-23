//Check if a number is Prime
#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,sqr,flag;
	flag=0;
	scanf("%d",&num);
	sqr=sqrt(num);
	for(i=2;i<=sqr;i++)
	{
		if(num%i==0)
		{
			flag=1;
			printf("no");
			break;
		}	
		else{}
	}
	if(flag==0) printf("yes");
	return 0;
}
