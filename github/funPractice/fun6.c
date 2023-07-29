//functin to left rotate an arr k times.
#include<stdio.h>
void rotate(int arr[],int n,int k)
{
	
	 k=k%n;
	printf("rotate array is : ");
	for(int i=0;i<n;i++)
	{
	    printf("%d ",arr[(i+k) % n]);
	    
	}
	printf("\n");
}
     
int main()
{	
	int arr[10],k,n;
	printf("enter rotation the number : ");
	scanf("%d",&k);
	printf("enter the number : ");
	scanf("%d",&n);
	printf("Enter the element of array : ");
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	    
	}
	printf("oringanal array : ");
	for(int i=0;i<n;i++)
	{
	    printf("%d ",arr[i]);
	}
	printf("\n");
	rotate(arr,n,k);
}























