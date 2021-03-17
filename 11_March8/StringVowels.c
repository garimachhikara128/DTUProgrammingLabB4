#include<stdio.h>

int main()
{
    char str[20] ;

    printf("Enter the String ? ") ;
    scanf("%s", str) ;

    int count = 0 ; // track vowels

    int i = 0 ;
    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++ ;

        i++ ;
    }

    printf("No. of vowels in %s is %d.\n", str, count) ;

    return 0 ;
}