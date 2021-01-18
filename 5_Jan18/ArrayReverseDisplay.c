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

    // display array
    for(int i = n-1 ; i >=0 ; i = i - 1)
    {
        printf("%d\t", arr[i]) ;
    }

    return 0 ; 
}