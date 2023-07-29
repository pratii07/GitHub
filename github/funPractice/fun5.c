//frequency of charcter in the string .
#include<stdio.h>

int freq(char *str,char n)
{	
	int c=0,i;
	while(*str!='\0')
	{
	   if(*str == n)		
	   {
	     c++;
	   }
	   str++;
	}
	return c;

}
int main()
{
	char str[]="pratikaaaaha";
	char n ='l';
	 
	
	int frequency=freq(str,n);
	printf("frequency of string is : %d\n",frequency);
	
	return 0;
}
