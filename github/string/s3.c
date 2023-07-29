//string as pointer(printing string using pointer)
#include<stdio.h>
#include<string.h>
int main()
{
 	char str[100];
 	printf("enter the string: ");
 	fgets(str, sizeof(str),stdin);
 	char *ptr= str;
 	int i=0;
 	
 	while(*ptr!='\0')
 	{
 	  printf("%c",*ptr);
 	  ptr++;
 	  i++;
 	}
 	
 	return 0;
 }
 
 	  
