//dutch national flag sort
/* where arr[mid]==0, swap arr[low],arr[mid],low++,mid++
where arr[mid]==1, mid++
where arr[mid]==2, swap arr[high],arr[mid],high-- */
#include <stdio.h>

int dnfsort(int arr[],int n)
{
        int low=0;
        int mid=0;
        int high=n-1;
        int temp=0;
        while(mid<=high)
        {
            if(arr[mid]==0)
            {
                temp=arr[low];
                arr[low]=arr[mid];
                arr[mid]=temp;
                low++;
                mid++;
            }
            else if(arr[mid]==1)
            {
                mid++;
            }
            else
            {
                
                temp=arr[high];
                arr[high]=arr[mid];
                arr[mid]=temp;
                high--;
            }
            
        }
        
    
}

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d elements(only 0,1,2): ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("origanal array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    dnfsort(arr,n);
    printf("sorted array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}


