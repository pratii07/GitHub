#include<stdio.h>
int main()
{
    int a;
    printf("enter the Age");
    scanf("%d",&a);
    if(a<=18 || a<=65)
    {
    printf("eligible and is not senior citizen");
    }
    else if(18<=a || a>=65)
    {
    printf("eligible and is senior citizen");
    }
    else
    {
    printf("not eligible not senior citizen");
    }
}    
