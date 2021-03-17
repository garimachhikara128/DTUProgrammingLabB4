#include<stdio.h>
#include<string.h>

int main()
{

    char str[20] = "hello" ;
    char str1[20] = "bye" ;

    // printf("Length : %d\n" , strlen(str)) ;
    // printf("Reverse : %s\n" , strrev(str)) ;

    // printf("Compare : %d\n", strcmp("code", "gode")) ;
    // strcat(str, str1) ;
    // printf("Concat : %s %s", str, str1) ;
    strupr(str) ;
    printf("Upper : %s\n", str) ;

    strlwr(str) ;
    printf("Lower : %s\n", str) ;

    return 0 ;

}