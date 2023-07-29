//inbuild function
/*#include<stdio.h>
#include<string.h>
int main()
{
   char str[40];
   printf("enter the string : ");
   fgets(str,sizeof(str),stdin);
   //giving us lengthn of string
   int x=strlen(str);
   printf("%d",x);
   return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
   char str[40];
   char str1[40];
   printf("enter the strings : ");
   fgets(str,sizeof(str),stdin);
   fgets(str1,sizeof(str1),stdin);
   //Copy the second string to the first string using str
   strcpy(str,str1);
   
   printf("%s",str1);
   
   return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
   char str[40];
   char str1[40];
   printf("enter the strings : ");
   fgets(str,sizeof(str),stdin);
   fgets(str1,sizeof(str1),stdin);
   //join the two string
   strcat(str,str1);
   
   printf("concatenated string : %s",str);
   
   return 0;
}*/
//output in boolean(same name are equal)
 #include<stdio.h>
#include<string.h>

int main()
{
   char str[40];
   char str1[40];
   
   printf("Enter the strings: ");
   fgets(str, sizeof(str), stdin);
   fgets(str1, sizeof(str1), stdin);
   //compare the string using strcmp
   int x=strcmp(str, str1); 
   
   if(x==0)
   { 
     printf("string is equal");
   }
   else
   {
      printf("string is not equal");
   }
   return 0;
}/*
#include<stdio.h>
#include<string.h>

int main()
{
   char str[40];
   char str1[40];
   
   printf("Enter the strings: ");
   fgets(str, sizeof(str), stdin);
   fgets(str1, sizeof(str1), stdin);
   //Copy the second string to the first string using strcpy
   strcpy(str, str1);  
   
   printf(" %s", str); 
   return 0;
}*/
  
 

