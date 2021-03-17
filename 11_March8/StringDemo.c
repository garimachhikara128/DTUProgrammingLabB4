#include<stdio.h>

int main()
{
    // char arr[] = {'h', 'e', 'l', 'l', 'o', '\0'} ;
    // char str[] = "hello" ;

    // // way 1 
    // for (int i = 0; i < 5 ; i++)
    //     printf("%c\n", str[i]) ;
    
    // // way 2
    // for(int i = 0 ; str[i] != '\0' ; i++)
    //     printf("%c\n", str[i]) ;

    char arr[20]  = "hello";
    
    //scanf("%s", arr) ;
    arr[2] = '\0' ;
    printf("%s", arr) ;


    return 0 ;
}