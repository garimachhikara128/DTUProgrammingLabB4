#include<stdio.h>

void PD(int) ;

int main()
{

    printf("hello\n") ;
    PD(3) ;
    printf("bye\n") ;

    return  0 ;
}

// bigger problem
void PD(int n)
{
    // base case
    if(n == 0)
        return ;

    // work
    printf("hi %d\n", n) ;

    // smaller problem
    PD(--n) ;

    printf("bye %d\n", n) ;
}