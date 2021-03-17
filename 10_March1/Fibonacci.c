#include<stdio.h>

int fib(int) ;

int main()
{
    int res = fib(5) ;
    printf("%d", res) ;

    return 0 ;
}

// BP : nth fib no.
int fib(int n)
{
    if(n == 0 || n == 1)
        return n ;

    // SP : n-1 fib no, n-2 fib no
    int fnm1 = fib(n-1) ; 
    int fnm2 = fib(n-2) ;

    // Work
    int fn = fnm1 + fnm2 ; 

    return fn ;
}