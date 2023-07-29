//leaders in array(max from right)
#include<stdio.h>
int leader(int arr[],int n)
{
	int max=arr[n-1];
   	for(int i=n-2;i>0;i--)
   	{
   	     if(arr[i]>max)
   	     max=arr[i];
   	}
	printf("%d is leader", max);
	return 0;
}   
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("enter the %d numbers : ",n);
	
	for(int i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
	  printf("%d ",arr[i]);
	}
	printf("\n");
	
	leader(arr,n);
	return 0;
	
}


