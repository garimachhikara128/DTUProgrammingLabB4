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

    for(int i = 0 ; i <= n-1 ; i++)
    {
        if(arr[i] == item)
            idx = i ;
    }

    if(idx == -1)
        printf("%d is not present." , item) ;
    else
        printf("Last occ of %d is at %d index." , item, idx) ;

    return 0 ;
}