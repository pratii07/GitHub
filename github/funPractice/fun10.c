//given pattern in string 
#include<stdio.h>
#include<string.h>
int string(char* name,char* name1)
{
	
	int namelen=strlen(name);
	int name1len=strlen(name1);
	
	for(int i=0;i<=namelen-name1len;i++)
	{
	   int j;
	   for( j=0;j<name1len;j++)
	   {
	     if(name[i+j]!=name1[j])
	     {
	       break;
	     }
	   }
	   if(j==name1len)
	   {
	     return i;
	   }
                       }
                       return -1;
}
int main()
{
	char name[100];
	char name1[50];
	printf("enter the text: ");
	fgets(name,sizeof(name),stdin);
	printf("enter the pattern: ");
	fgets(name1,sizeof(name1),stdin);
	
	name[strcspn(name, "\n")]='\0';
	name1[strcspn(name1, "\n")]='\0';
	
	int index=string(name,name1);
	
	if(index !=-1)
	{
	   printf("pattern found at index : %d\n",index);
	}
	else
	{
	   printf("pattern not found.\n");
	}
	return 0;
}











