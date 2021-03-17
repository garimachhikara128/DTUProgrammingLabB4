#include<stdio.h>

int main()
{
    char str[20] ;

    printf("Enter the String ? ") ;
    scanf("%s", str) ;

    // length of original string
    int len = 0 ;
    while(str[len] != '\0')
        len++ ;

    // reverse logic 
    int i = 0 ;
    int j = len-1 ;

    while(i < j)
    {
        // swap
        char temp = str[i] ;
        str[i] = str[j] ;
        str[j] = temp ;

        i++;
        j-- ;
    }

    printf("Reverse is %s\n", str) ;    

    return 0 ;
}