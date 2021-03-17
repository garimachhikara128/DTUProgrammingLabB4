#include<stdio.h>

int main()
{
    int arr[4][5] = { {11,12,13,14,15} , {16,17,18,19,20} , {21,22,23,24,25} , {26,27,28,29,30} };
    int rows = 4 ;
    int cols = 5 ;

    // 2D Array Display
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("%d\t", arr[r][c]) ;
        }
        printf("\n") ;
    }

    printf("\n") ;
    
    // 2D Array Wave Print
    for(int c = 0 ; c < cols ; c++)
    {
        if(c % 2 == 0) // downward
        {
            for(int r = 0 ; r < rows ; r++)
                printf("%d ", arr[r][c]) ;
        }
        else // upward
        {
            for(int r = rows-1 ; r >=0  ; r--)
                printf("%d ", arr[r][c]) ;
        }

    }

    return 0 ;
}