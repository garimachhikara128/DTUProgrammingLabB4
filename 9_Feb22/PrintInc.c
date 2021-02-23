#include<stdio.h>

void PI(int) ;

int main()
{

    PI(5) ;

    return 0 ;
}

// 1 -> n counting
void PI(int n)
{
    if(n == 0)
        return ;

    // 1 -> n-1 counting 
    PI(n-1) ;

    // work
    printf("%d\n", n) ;
}