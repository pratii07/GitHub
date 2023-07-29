#include<stdio.h>
int power(int a, int b)
{
	if(b==1)
	return a;
                        int r= power(a,b/2);
                        if(b%2==0)
                        return r*r;
                        else
	return r*r*a;
}
int main()
{
	int a,b,p;
	printf("enter the base and power: ");
	scanf("%d%d",&a,&b);
	p=power(a,b);
	printf("%d %d power is %d",a,b,p);
	return 0;
}
	

