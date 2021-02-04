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

    int rot ;

    printf("Enter the no. of rotations ?") ;
    scanf("%d", &rot) ;

    // rot logic ...
    for(int r = 1 ; r <= rot ; r++)
    {
        // single rotation logic ...
        int temp = arr[n-1] ;

        for(int i = n-1 ; i >= 1 ; i--)
        {
            arr[i] = arr[i-1] ;
        }

        arr[0] = temp ;        
    }

    // display
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\t" , arr[i]) ;
    }
  

    return 0 ;

}