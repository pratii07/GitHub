/*[0,0,0,0,0,1f,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0]

abcde
abcfe
*/
//Anagram Check: Write a program that checks whether two strings are anagrams of each other. Anagrams are words or phrases formed by rearranging the letters of another word or phrase. For example, if the input is "listen" and "silent", the output should be true.

#include<stdio.h>
#include<string.h>
int main()
{
  	char str[40];
  	char str1[40];
  	
  	printf("Enter the 1st strings: ");
  	fgets(str,sizeof(str),stdin);
  	
  	printf("Enter the 2nd strings: ");
    	fgets(str1,sizeof(str1),stdin);
    	
    	int count[256]={0};
    	
  	int size=strlen(str);
  	int size1=strlen(str1);
  	
  	int anagram=1;
  	
                    if(size != size1)
                    {
  	anagram=0;

                    }
                    else
  	
                    { 
                        for(int i=0;i<size;i++)
  	{
  	  count[(int)str[i]]++;
  	}
  	
  	for(int i=0;i<size1;i++)
  	{
  	  count[(int)str1[i]]--;
  	}
  	
  	for(int i=0; i<256;i++)
  	{
  	  if(count[i] !=0)
  	  {
  	   anagram=0;
  	   break;
  	  }
  	}
                      }
                      if(anagram==1)
                      {
                           printf("it is anagram !!!\n");
                      }
                      else
                      {
                           printf("it is NOT anagram !!!\n");
                      }
                       return 0;
}








































  	
  	
  	
