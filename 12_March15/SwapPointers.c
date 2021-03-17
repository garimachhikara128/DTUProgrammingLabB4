#include<stdio.h>

void swap(int *, int *);

int main()
{
    int n1, n2 ;

    printf("Enter two nos ?\n") ;
    scanf("%d %d", &n1, &n2) ;

    printf("Before Swap : n1 -> %d , n2 -> %d\n", n1 , n2) ;
    swap(&n1, &n2) ;
    printf("After Swap : n1 -> %d , n2 -> %d\n", n1 , n2) ;

    return 0 ;
}

void swap(int *p1, int *p2)
{
    int temp = *p1 ;
    *p1 = *p2 ;
    *p2 = temp ;
}