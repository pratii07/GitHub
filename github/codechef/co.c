#include <stdio.h>

#include <string.h>



int main(void) {

	int a,n;

	scanf("%d",&n);

	while(n--)

	{

	    scanf("%d",&a);

	    char arr[2];
	    int c1=0,c2=0,c3=0,c4=0;

	    for(int i=0;i<a;i++){

	    scanf("%s",arr);

	    

	   

	        if(arr[0]=='A' && arr[1]=='B')

	        c3++;

	        else if(arr[0]=='A')

	        c1++;

	        else if(arr[0]=='B')

	        c2++;

	        else c4++;

	    }

	    if(c1> c2)

	    printf("%d\n",c1+c3+c4);

	    else 

	    printf("%d\n",c2+c3+c4);



	}

	return 0;

}





