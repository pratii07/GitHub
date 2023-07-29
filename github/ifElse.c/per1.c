#include<stdio.h>
int main()
{
    int m;
    printf("enter the num");
    scanf("%d",&m);
  
 if(m<=100)
 {
    if(m>=90)
    {
    printf("grade X");
    }
    else if(m>=75)
    {
    printf("grade A");
    }
    else if(m>=60)
    {
    printf("grade B");
    }
    else if(m>=45)
    {
    printf("grade C");
    }
    else 
    {
       if(m>=0)
       {
       printf("you are fail,better luck next time");
       }
       else
       {
       printf("you have enter negetive number");
       }
    }  
 }  
  else
  {
     printf("you enter number greater then 100");
  }
}
