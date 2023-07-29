//Palindrome Check: Write a program that checks whether a given string is a palindrome or not. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward. For example, if the input is "racecar", the output should be true. 
#include<stdio.h>
#include<string.h>
int main()
{
            char str[40];
            printf("Enter the string : ");
            fgets(str,sizeof(str),stdin);
            int n=strlen(str)-1;
            int i=0;
            int c=0;

           for(i=0;i<n/2;i++)
            {
              if(str[i]!=str[n-i-1])
              {
                c++;
                break;  //if ststement chya aat pahije 
                
              }

            }
            if(c>0)
            {
                printf("string is not pallindrome.\n");
            }
            else
            {
                printf("string is pallindrome.\n");
            }
            return 0;
}
              
              
