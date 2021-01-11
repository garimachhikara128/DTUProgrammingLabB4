#include<stdio.h>
#include<math.h>

int main()
{

    int i = 1 ;
    while (i <= 5)
    {
       int ans = pow(10, i) ;

       printf("%d", ans) ;
       i++ ;
    }
    

    return 0 ; 
}