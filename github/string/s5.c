//insertion in string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40],ch;
	int n;
	printf("Enter the string : ");
	fgets(str,sizeof(str),stdin);
	printf("Enter position and charcter which insert : ");
                        scanf("%d\n",&n);
                        scanf("%c",&ch);
                        int size=strlen(str);
                        for(int i=size;i>=n;i--)
                        {
                           str[i+1]=str[i];
                        }
                        str[n]=ch;
                        printf("%s",str);
                        return 0;
}
