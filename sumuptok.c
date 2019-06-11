//Find sum of first K numbers in the array
int main()
{
	int size,k,itr,sum;
	sum=0;
	scanf("%d %d",&size,&k);
	int arr[size];
	for(itr=0;itr<size;itr++)
	{
		scanf("%d",&arr[itr]);
	}
	for(itr=0;itr<k;itr++)
	{
		sum=sum+arr[itr];
	}
	printf("%d",sum);
	return 0;
}
