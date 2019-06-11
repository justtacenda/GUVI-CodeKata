//Median Element in an array
#include<stdio.h>
int main()
{
	int size,itr;
	scanf("%d",&size);
	int arr[size];
	for(itr=0;itr<size;itr++)
	{
		scanf("%d",&arr[itr]);
	}
	printf("%d",arr[size/2]);
	return 0;
}
