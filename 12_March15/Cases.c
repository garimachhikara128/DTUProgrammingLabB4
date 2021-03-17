#include<stdio.h>

int main()
{
    char str[20] ;

    printf("Enter the string ?\n") ;
    scanf("%s", str) ;

    int i = 0 ;
    while(str[i] != '\0')
    {
        char ch = str[i] ;

        if(ch >= 'A' && ch <= 'Z')
            printf("%c : UPPER\n", ch) ;
        else if(ch >= 'a' && ch <= 'z')
            printf("%c : lower\n", ch) ;
        else
            printf("%c : $peci@l Ch@r@cter\n", ch) ;

        i++ ;
    }



    return 0 ;
}