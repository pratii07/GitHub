#include<stdio.h>
int main()
{
    int m;
    printf("enter the num");
    scanf("%d",&m);
  {
    if(m<=0 || m>100)
    {
    printf("Invalid number");
    }
    else if(m>=90)
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
    printf("FAIL");
    }
  }
 }   
