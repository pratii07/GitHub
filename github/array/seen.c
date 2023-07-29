#include<stdio.h>
int main()
{	
	int arr[10]={0};
	int r,n;
	scanf("%d",&n);
	while(n>0)
	{
	   r=n%10;
	   if(arr[r]==1)
	   break;
	   arr[r]=1;
	   n=n/10;
	   
                        }
                        if(n>0)
                        printf("yes");
                        else
                        printf("no");
                        return 0;
}
