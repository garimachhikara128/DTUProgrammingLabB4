#include<stdio.h>

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

    // sum array
    int sum = 0 ;
    for(int i = 0 ; i <= n-1 ; i++)
    {
        sum += arr[i] ;
    }

    printf("Sum of elements of array is %d", sum) ;

    return 0 ; 
}