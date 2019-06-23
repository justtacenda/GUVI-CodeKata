//Minimum among ten numbers
#include<stdio.h>
#include<limits.h>
int main()
{
	int itr,arr[10],min;
	min=INT_MAX;
	for(itr=0;itr<10;itr++)
	{
		scanf("%d",&arr[itr]);
		if(arr[itr]<min)
		min=arr[itr];		
	}
	printf("%d",min);
	return 0;
}
