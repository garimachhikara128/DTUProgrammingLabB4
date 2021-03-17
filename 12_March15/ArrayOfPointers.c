#include<stdio.h>

int main()
{
    // int n1 = 10 ;
    // int n2 = 20 ;
    // int n3 = 30 ;
    // int n4 = 40 ;

    // array of int pointers
    // int* arr[4] ;

    // arr[0] = &n1 ;
    // arr[1] = &n2 ;
    // arr[2] = &n3 ;
    // arr[3] = &n4 ;

    int val[4] = {100,200,300,400} ;
    int* arr[4] = {val , val + 1, val+2 , val+3} ;

    for(int i = 0 ; i < 4 ; i++)
        printf("%d\n", arr[i]) ;


}