//Check if the number is a power of 2
#include<stdio.h>
int isPowerOfTwo (int x)  
{  
    return x && (!(x&(x-1)));  
}  
  
int main()  
{   
	int num;
	scanf("%d",&num);
    isPowerOfTwo(num)? printf("yes"):printf("no");
    return 0;  
}  
