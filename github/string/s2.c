//reverse string
/*#include<stdio.h>
#include<string.h>
int main()
{
 	char str[40];
 	gets("enter the string: ");
                        puts(str);
                        int k=0;
                        int size=0;
                        while(str[k]!='\0')  //calculate size here
 	{
 	  k++;
 	  size++;
 	}
 	//strlen(str); we use this instant of above loop for size of string
 	for(int i=0,j=size-1;i<j;i++,j--)
 	{
 	   char temp=str[i];
 	   str[i]=str[j];
 	   str[j]=temp;
 	}
 	fgets("the reverse string is : ");
 	puts(str);
 	return 0;
 }*/
 // it gives whole sentence reverse
 #include<stdio.h>
#include<string.h>
int main()
{
 	char str[100];
 	printf("enter the string: ");
                        //fgets(str, sizeof(str), stdin); //by this 2 line
                        str[strcspn(str, "\n")] = '\0'; 
                        int k=0;
                        int size=strlen(str);
 	for(int i=0,j=size-1;i<j;i++,j--)
 	{
 	     char temp=str[i];
 	     str[i]=str[j];
 	     str[j]=temp;
 	}
 	printf("%s\n",str);
 	
 	return 0;
}
  	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	  	
 
 

