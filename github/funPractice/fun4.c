#include<stdio.h>
void zeros(int arr[],int n)
{  
   int c=0;
   
   for(int i=0;i<n;i++)
   {
      if(arr[i]!=0)
      {
       arr[c]=arr[i];
       c++;
      }
   }
  
   while(c<n)
   {
      arr[c]=0;
      c++;
   }
   
}
int main()
{
	int arr[7]={15,0,0,6,3,0,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printf("original array is : ");
	for(int i=0;i<n;i++)
	{
	   printf("%d	",arr[i]);
	}
	printf("\n");
	
	zeros(arr,n);
	printf("New   array is    : ");
	for(int i=0;i<n;i++)
	{
	   printf("%d	",arr[i]);
	}
	printf("\n");
	
	return 0;
	
}
