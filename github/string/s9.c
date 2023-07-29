//Count Words: Write a program that counts the number of words in a given string. Consider words to be separated by spaces. For example, if the input is "Hello, how are you?", the output should be 4.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	printf("Enter the string : ");
	fgets(str,sizeof(str),stdin);
	int c=0;
	int size=strlen(str);
	for(int i=0;i<size;i++)
	{
	  if(str[i] !=' ' && (i==0 || str[i-1]==' '))
	  {
	    c++;
	  }
	}
	printf("output : %d",c);
	return 0;
}
