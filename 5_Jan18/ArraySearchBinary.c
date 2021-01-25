#include<stdio.h>

int main()
{
    int n , item; 

    printf("Enter the no. of elements in array ?") ;
    scanf("%d", &n) ;

    int arr[n] ;

    for(int i = 0 ; i <= n-1 ; i = i + 1)
    {
        printf("arr[%d] : " , i) ;
        scanf("%d", &arr[i]) ;
    }

    printf("Enter the item to be searched ?") ;
    scanf("%d", &item) ;

    int idx = -1 ;

    int lo = 0 ;
    int hi = n-1 ;

    while(lo <= hi)
    {
        int mid = (lo+hi)/2 ;

        if(item > arr[mid])
            lo =  mid + 1;
        else if(item < arr[mid])
            hi = mid - 1;
        else
        {
            idx = mid ;
            break ;
        }

    }

    if(idx == -1)
        printf("%d is not present." , item) ;
    else
        printf("%d is present at %d index." , item, idx) ;
        
    return 0 ;
}