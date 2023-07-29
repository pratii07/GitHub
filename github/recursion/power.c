#include<stdio.h>
int power(int a, int b)
{
	if(b==0)
	return 1;
                        int rcans= a*power(a,b-1);
	return rcans;
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
	

