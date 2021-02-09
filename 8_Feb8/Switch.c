#include<stdio.h>

int main()
{
    char op ;
    int n1 , n2 ;

    while(1)
    {
        printf("Enter the operator ?") ;
        scanf("%c" , &op) ;

        if(op == 'e')
            break ;

        printf("Enter n1 ?") ;
        scanf("%d" , &n1) ;

        printf("Enter n2 ?") ;
        scanf("%d" , &n2) ;

        switch(op)
        {
            case '+' : 
                        printf("%d + %d = %d\n", n1 , n2 , (n1+n2)) ;
                        break ;

            case '-' : 
                        printf("%d - %d = %d\n", n1 , n2 , (n1-n2)) ;
                        break ;

            case '*' : 
                        printf("%d * %d = %d\n", n1 , n2 , (n1*n2)) ;
                        break ;

            case '/' : 
                        printf("%d / %d = %d\n", n1 , n2 , (n1/n2)) ;
                        break ;

            default :
                        printf("Invalid Operation") ;
                        break ;            
        }

        fflush(stdin) ;
    }

    return  0 ;
}