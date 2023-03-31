#include<stdio.h>




void linear_search(int arr[], int n, int key)
{

    for(int i=0 ; i<=n-1 ; i++)
    {
        if(arr[i]==key)
        {
            printf("key found at index %d",i);
        }
        else
        {
            printf("key not found");
        }
    }
    
}

int main()
{
    int arr[10];
    int n , i,key;

    printf("enter the value of n\n");
    scanf("%d",&n);

    printf("enter array elements\n");
    for(i=0 ; i<=n-1 ; i++)
    {
        scanf("%d",&arr[i]);
    }


 printf("enter key");
 scanf("%d",&key);
    lenear_search(arr,n,key);
 
 return 0;

}
