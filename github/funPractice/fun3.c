//check array is sorted or not
#include<stdio.h>
#include<stdbool.h>
bool sorted(int arr[],int n)
{
            for(int i=1;i<n;i++)
            {
	if(arr[i]<arr[i-1])
	{
	 return false;
	}
            }
	return true;
	
}
int main()
{
	int arr[]= {10,20,80,40,50,60,70};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", sorted(arr,n));
	return 0;
}
	
	
