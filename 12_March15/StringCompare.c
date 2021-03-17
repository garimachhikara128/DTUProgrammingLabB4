#include<stdio.h>

int main()
{
    char fs[20] ;
    printf("Enter the first string ?\n") ;
    scanf("%s", fs) ;

    char ss[20] ;
    printf("Enter the second string ?\n") ;
    scanf("%s", ss) ;

    int i = 0 ;

    while(fs[i] == ss[i])
    {
        if(fs[i] == '\0' && ss[i] == '\0')
            break ;
        
        i++ ;
    }

    if(fs[i] == '\0' && ss[i] == '\0')
        printf("Equal") ;
    else
        printf("Not Equal") ;

    return 0 ;
}