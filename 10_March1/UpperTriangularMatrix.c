#include<stdio.h>

int main()
{
    int arr[4][4] = { {11,12,13,14} , {15,16,17,18} , {19,20,21,22} , {23,24,25,26} };

    // 2D Array Display
    for(int r = 0 ; r < 4 ; r++)
    {
        for(int c = 0 ; c < 4 ; c++)
        {
            printf("%d\t", arr[r][c]) ;
        }
        printf("\n") ;
    }

    printf("\n") ;
    
    // 2D Array Lower Triangular Matrix
    for(int r = 0 ; r < 4 ; r++)
    {
        for(int c = 0 ; c < 4 ; c++)
        {
            if(c < r)
                printf("0\t") ;
            else
                printf("%d\t", arr[r][c]) ;
        }
        printf("\n") ;
    }




    return 0 ;
}