//Sorted array Improved Time Complexity
#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size],itr,jtr,temp;
	for(itr=0;itr<size;itr++)
	{
		scanf("%d",&arr[itr]);
	}
	for(itr=0;itr<size-1;itr++)
	{
		for(jtr=itr+1;jtr<size;jtr++)
		{
			if(arr[itr]>arr[jtr])
			{
				temp=arr[itr];
				arr[itr]=arr[jtr];
				arr[jtr]=temp;	
			}
		}
	}
	for(itr=0;itr<size-1;itr++)
	{
		printf("%d ",arr[itr]);
	}
	printf("%d",arr[size-1]);
}
