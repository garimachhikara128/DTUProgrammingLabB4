#include<stdio.h>

int factorial(int) ;

int main()
{

    int ans = factorial(6) ;
    printf("%d", ans) ;

    return 0 ;
}

// BP : n !
int factorial(int n)
{
    // Base Case
    if(n == 1)
        return 1 ;
        
    // SP : (n-1) !
    int fnm1 = factorial(n-1) ;

    // Work
    int fn = n * fnm1 ;

    return fn ;
    
}