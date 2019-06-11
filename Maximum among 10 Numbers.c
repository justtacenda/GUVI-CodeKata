//Maximium among 10 Numbers
#include<stdio.h>
#include<limits.h>
int main()
{
	int itr,arr[10],max;
	max=INT_MIN;
	for(itr=0;itr<10;itr++)
	{
		scanf("%d",&arr[itr]);
		if(arr[itr]>max)
		{
			max=arr[itr];
		}
	}
	printf("%d",max);
}
