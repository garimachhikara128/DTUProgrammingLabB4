#include<stdio.h>

int main()
{
    char fs[30] ;
    printf("Enter the first string ?\n") ;
    scanf("%s", fs) ;

    char ss[10] ;
    printf("Enter the second string ?\n") ;
    scanf("%s", ss) ;

    int len = 0 ;
    while(fs[len] != '\0')
        len++ ;

    int i = len ;
    int j = 0 ;

    while(ss[j] != '\0')
    {
        fs[i] = ss[j] ;

        i++ ;
        j++ ;
    }
    
    fs[i] = '\0' ;

    printf("First string is %s\n", fs) ;
    printf("Second string is %s\n", ss) ;

    return 0 ;
}