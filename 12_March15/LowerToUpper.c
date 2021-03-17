#include<stdio.h>

int main()
{
    char str[20] ;

    printf("Enter the string ?\n") ;
    scanf("%s", str) ;

    int diff = 'a' - 'A' ;

    int i = 0 ;
    while(str[i] != '\0')
    {
        char ch = str[i] ;

        if(ch >= 'A' && ch <= 'Z') 
        {
            // do nothing
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            str[i] = ch - diff ;
        }            
        else
        {
            // do nothing
        }

        i++ ;
    }

    printf("LowerCase string is %s", str) ;

    return 0 ;
}