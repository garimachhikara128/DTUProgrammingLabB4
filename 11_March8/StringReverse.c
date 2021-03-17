#include<stdio.h>

int main()
{
    char os[20] ;

    printf("Enter the String ? ") ;
    scanf("%s", os) ;

    char ns[20] ;

    // length of original string
    int len = 0 ;
    while(os[len] != '\0')
        len++ ;

    // reverse logic 
    int i = len - 1 ;
    int j = 0 ;

    while(i >= 0)
    {
        ns[j] = os[i] ;

        i--;
        j++ ;
    }

    ns[j] = '\0' ;

    printf("Reverse of %s is %s", os, ns) ;    

    return 0 ;
}