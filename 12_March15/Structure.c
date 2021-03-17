#include<stdio.h>

struct Employee
{
    char name[20] ;
    int empId ;
    float salary ;
};

int main()
{
    struct Employee e ;

    printf("Enter the details :-\n") ;
    printf("Enter name ?\n") ;
    scanf("%s", e.name) ;
    printf("Enter employee id ?\n") ;
    scanf("%d", &e.empId) ;
    printf("Enter salary ?\n") ;
    scanf("%f", &e.salary) ;

    printf("\nDetails are :-\n") ;
    printf("Name : %s\n", e.name) ;
    printf("EmpId : %d\n", e.empId) ;
    printf("Salary : %0.2f\n", e.salary) ; 

    return 0 ;
}
