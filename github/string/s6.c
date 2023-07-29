/*Count Vowels: Write a program that counts the number of vowels in a given string. Consider both uppercase and lowercase vowels. For example, if the input is "Hello, World!", the output should be 3.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	printf("enter the string : ");
	fgets(str, sizeof(str),stdin);
	//int size=strlen(str);
	int i=0,count=0;
	
	//for(int i=0;i<size;i++)
	while(str[i] !='\0')
	{
	      if(str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ||
	      str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' || str[i]=='u')
	      {
	        count++;
	      }
	      i++;
	}
	printf("Output should be %d.",count); 
	
	return 0;
}
	

