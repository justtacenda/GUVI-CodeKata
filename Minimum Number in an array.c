//Maximum Number in an array
#include<stdio.h>
#include<limits.h>
int main()
{
	int size,itr;
	scanf("%d",&size);
	int arr[size],min=INT_MAX;
	for(itr=0;itr<size;itr++)
	{
		scanf("%d",&arr[itr]);
		if(arr[itr]<min)
		{
			min=arr[itr];
		}
	}
	printf("%d",min);
	return 0;
}
