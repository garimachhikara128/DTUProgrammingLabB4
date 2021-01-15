#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    int temp = n ;
    int nod = 0 ;

    while(n != 0) 
    {
        nod = nod + 1; 
        n = n/10 ;
    }

    printf("No. of digits in %d is %d" , temp , nod) ;

    return 0 ;
}