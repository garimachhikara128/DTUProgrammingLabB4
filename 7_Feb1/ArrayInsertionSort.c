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

    // Insertion Sort
    for(int count = 1 ; count <= n-1 ; count++)
    {
        int val = arr[count] ;
        
        int j = count - 1;
        while(j >=0 && arr[j] > val)
        {
            arr[j+1]= arr[j] ;
            j-- ;
        }

        arr[j+1] = val ;
         
    }

    // display
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\t" , arr[i]) ;
    }
  

    return 0 ;

}