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

    // Selection Sort
    for(int count = 0 ; count <= n-2 ; count++)
    {
        int minidx = count ;

        for(int j = count + 1; j <= n-1 ; j++)
        {
            if(arr[j] < arr[minidx])
                minidx = j ;
        }
      
        int temp = arr[minidx] ;
        arr[minidx] = arr[count] ;
        arr[count] = temp ;
         
    }

    // display
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\t" , arr[i]) ;
    }
  

    return 0 ;

}