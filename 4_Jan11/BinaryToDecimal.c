#include<stdio.h>

int main()
{

    int binary ;

    printf("Enter binary no ?") ;
    scanf("%d", &binary) ;

    int ans = 0 ;
    int mult = 1 ;

    while(binary != 0)
    {
        int rem = binary % 10 ;
        
        ans = ans + rem * mult ;
        
        mult *= 2 ;
        binary /= 10 ;
    }

    printf("Decimal is %d" , ans) ;

    return 0 ; 
}