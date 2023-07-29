 //String Concatenation: Write a program that concatenates two strings together. For example, if the input is "Hello" and "World!", the output should be "Hello World!".
 #include<stdio.h>
 #include<string.h>
 int main()
 {
   	char str[40];
   	char str1[40];
   	printf("Enter two strings : ");
   	fgets(str,sizeof(str),stdin);
   	fgets(str1,sizeof(str1),stdin);
   	
   	strcat(str,str1);
   	printf("concatenates of strings : %s",str);
   	
   	return 0;
}
