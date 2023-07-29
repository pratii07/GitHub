#include<stdio.h>
int fun(){
    static int n=16;
    return n--;
}
int main()
{
for(fun();fun();fun())
printf("%d",fun());
return 0;
}
