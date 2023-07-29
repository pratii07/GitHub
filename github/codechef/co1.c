#include<stdio.h>
int main()
{
  int t,x,p;
  int a=0;
  scanf("%d",&t);
  
  for(int i=1;i<t;i++)
  {
      for(int j=0;j<i;j++)
      {
          scanf("%d",&x);
        
        if(x%3==0)
        {
           printf("NORMAL\n");
        }
        else
        {
          p=a+1;
          if(x==p)
          {
            printf("HUGE\n");
          }
          printf("SMALL\n");
          a=a+3;
        }
        
      }
   }
      return 0;
}
