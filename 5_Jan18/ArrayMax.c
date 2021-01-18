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

    // max logic ...
    int max = INT_MIN ;

    for(int i = 0 ; i <= n-1 ; i++)
    {
        if(arr[i] > max)
            max = arr[i] ;
    }

    printf("Max of array is %d", max) ;


}