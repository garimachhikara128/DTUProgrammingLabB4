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

    // Bubble Sort
    for(int count = 0 ; count <= n-2 ; count++)
    {
        for(int j = 0 ; j <= n-count-2; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
      
    }

    // display
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\t" , arr[i]) ;
    }

    return 0 ;

}