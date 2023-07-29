//Remove Duplicates: Write a program that removes duplicate characters from a string and returns the modified string. For example, if the input is "Hello", the output should be "Helo".
#include<stdio.h>
#include<string.h>
int main()
{
          char str[40];
          printf("Enter the string : "); 
          fgets(str,sizeof(str),stdin);
          char arr[40];
          int size=strlen(str);
          int k=0;
          for(int i=0;i<size;i++)
          {
                    int duplicate=0;
                    
                    for(int j=i+1;j<size;j++)
                    {
                      if(str[i]==str[j])
                      {
                        duplicate=1;
                        break;
                      }
                    }
                    if(duplicate==0)
                    {
                      arr[k]=str[i];
                      k++;
                    }
          }
          arr[k]='\0';
          printf("%s",arr);
          return 0;
}
