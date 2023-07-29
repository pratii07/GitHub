#include<stdio.h>
#include<string.h>

void reverse(char *string)
{	
	
	int length = strlen(string);
	int i,j;
	char temp;
	for( i=0,j=length -1;i<j;i++,j--)
	{
	  temp = string[i];
	  string[i] = string[length-i-1];
	  string[length-i-1]=temp;
	  
	}

}
int main()
{
	char string[20];
	printf("enter the name : ");
	scanf("%s",string);
	
	reverse(string);
	printf("reverse name is %s : ",string);
	return 0;
}
