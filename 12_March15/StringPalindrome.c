#include<stdio.h>

int main()
{
    char str[20] ;
    printf("Enter the string ?\n") ;
    scanf("%s", str) ;

    // length
    int len = 0 ;
    while(str[len] != '\0')
        len++ ;

    // palindrome
    int flag = 0 ;

    int i = 0 ;
    int j = len-1 ;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 1 ;
            break ;
        }            

        i++ ;
        j-- ;
    }

    if(flag == 0)
        printf("Palindrome") ;
    else
        printf("Not Palindrome") ;

    return 0 ;
}