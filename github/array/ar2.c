//two dimentional matrix
#include<stdio.h>
int main()
{
	int r,c,;
	int a[10][10],b[10[10]],c[10][10];
	printf("enter the number of row: ");
	scanf("%d",&r);
	printf("enter the number of colume: ");
	scanf("%d",&c);
	
	for(int i=0;i<r;i++)
	{
	  for(int j=0;j<c;j++)
	  {
	    scanf("%d",&a[i][j]);
	  }
	}
	
	for(int i=0;i<r;i++)
	{
	  for(int j=0;j<c;j++)
	  {
	    scanf("%d",&b[i][j]);
	  }
	}
	c[10][10]=0;
	for(int k=0;k<r;k++)
	{
	  for(int l=0;l<c;l++)
	  {
	    c[10][10]=a[i][j]*b[k][l];
	    
	  }
	}
	for(int i=0;i<r;i++)
	{
	  for(int j=0;j<c;j++)
	  {
	    printf("%d",c[i][j]);
	  }
	}
	return 0;	
}
