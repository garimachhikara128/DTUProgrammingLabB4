#include<stdio.h>

int power(int , int) ;

int main()
{

    int ans = power(2,3) ;
    printf("%d\n", ans) ;

    return 0 ;
}

int power(int b , int e)
{
    if(e == 0)
        return 1 ;

    // Smaller Problem : b ^ e-1
    int bem1 = power(b , e-1) ;

    // Work
    int be = b * bem1 ;

    return be ;

}