#include<stdio.h>
#include<limits.h>

int main()
{
    int n ; 

    printf("Enter the no. of elements in array ?") ;
    scanf("%d", &n) ;

    int arr[n] ;

    for(int i = 0 ; i <= n-1 ; i = i + 1)
    {
        printf("arr[%d] : " , i) ;
        scanf("%d", &arr[i]) ;
    }

    // reverse
    int i = 0 ;
    int j = n-1 ;

    while(i < j)
    {
        int temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;

        i++ ;
        j-- ;
    }

    // display
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\t" , arr[i]) ;
    }

    return 0 ;

}