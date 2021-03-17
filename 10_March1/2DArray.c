#include<stdio.h>

int main()
{   
    int rows = 4 ;
    int cols = 3 ;

    int arr[rows][cols] ;

    // input
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("arr[%d-%d] ? ", r, c) ;
            scanf("%d", &arr[r][c]) ;
        }
    }

    // display
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("%d ", arr[r][c]) ;
        }
        printf("\n") ;
    }

    return 0 ;
}