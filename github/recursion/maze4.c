//using only four variables 
#include<stdio.h>
int maze(int cr,int cc,int er,int ec)
{
	int rway=0;
	int dway=0;
	if(cr==er && cc==ec) return 1;
	if(cr==er){
	   rway+=maze(cr,cc+1,er,ec);
	}
	if(cc==ec){
	   dway+=maze(cr+1,cc,er,ec);
	}
	if(cr<er && cc<ec){
	   rway+=maze(cr,cc+1,er,ec);
	   dway+=maze(cr+1,cc,er,ec);
	}
	int totalways=rway+dway;
	return totalways;
}
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int m;
	printf("enter the second number: ");
	scanf("%d",&m);
	int nodays= maze(1,1,n,n);
	printf("%d",nodays);
	return 0;
}	
