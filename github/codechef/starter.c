#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	
                while(T--)
                {
	   
	int X;
	scanf("%d",&X);
	int k=X;
	
	while(X>0)
	{
	  
	   if(k<=6)
	   {
	     if(k==1 || k==4)
	     {
	        printf("HUGE\n");
	        break;
	     }
	     else if(k==2 || k==5)
	     {
	        printf("SMALL\n");
	        break;
	     }
	     else
	     {
	         printf("NORMAL\n");
	         break;
	     }
	   }
	   else
	   {
	      if(k%2==0)
	      {
	          k=k/2;
	      }
	      else
	      {
	        k=k/2+1;
	      }
	   }
	}
                 }
	return 0;
}
	       
