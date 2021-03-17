#include<stdio.h>

int main()
{
    char str[20] ;

    printf("Enter the String ? ") ;
    scanf("%s", str) ;

    int i = 0 ;
    while(str[i] != '\0')
        i++ ;
    
    printf("Length of %s is %d.\n", str, i) ;

    return 0 ;
}