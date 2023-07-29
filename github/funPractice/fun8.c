//equilibrium index in array
#include<stdio.h>

int equi(int arr[],int n)
{
	int ts=0;
	int ls=0;
	int rs;
	
	for(int i=0;i<n;i++)
	{
	     ts += arr[i];
	}
	rs=ts;
	for(int i=0;i<n;i++)
	{
	  rs-=arr[i];
	  if(ls==rs)
	  {
	     return i;;
	  }
	  ls += arr[i];
	  
	}
	return 0;
}
int main()
{
	int n;
	printf("number is : " );
	scanf("%d",&n);
	int arr[n];
	printf("enter the %d elements : ", n);
	for(int i=0;i<n;i++)
	{
	   scanf("%d",&arr[i]);
	}
	printf("orignal array is : " );
	for(int i=0;i<n;i++)
	{
	   printf("%d ",arr[i]);
	}
	printf("\n");
	int comp = equi(arr,n);
	if(comp != -1)
	{
	  printf("eqillibrium point = %d", comp);
	}
	else
	{
	  printf("array is not containing  eqillibrium point");
	}
	return 0;
}
