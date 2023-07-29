#include<stdio.h>
int main()
{  int n;
  int arr[9]={34,56,54,32,67,89,90,32,21};
  for(int i=0;i<=9;i++)
  {
  	printf("%d ",arr[i]);
  	
  }
  printf("\n");
  for(int i=8;i>=0;i--)
  {
  	printf("%d ",arr[i]);
  	
  }
  return 0;
}
  
