#include<stdio.h>
#include<math.h>

float circleArea(int) ;
float circlePerimeter(int) ;
int rectangleArea(int, int) ;
int rectanglePerimeter(int, int) ;
int squareArea(int) ;
int squarePerimeter(int) ;
float triangleArea(int, int, int) ;
float trianglePerimeter(int, int, int) ;

int main()
{
    int radius , l , b , n , n1, n2 , n3 ;

    printf("Radius of circle ?") ;
    scanf("%d", &radius) ;

    printf("%0.2f\n", circleArea(radius)) ;
    printf("%0.2f\n", circlePerimeter(radius)) ;

    printf("Length and Breadth of Rectangle ?") ;
    scanf("%d %d", &l, &b) ;
    printf("%d\n", rectangleArea(l, b)) ;
    printf("%d\n", rectanglePerimeter(l, b)) ;

    printf("Side of a square ?") ;
    scanf("%d", &n) ;
    printf("%d\n", squareArea(n)) ;
    printf("%d\n", squarePerimeter(n)) ;

    printf("Sides of Triangle ?") ;
    scanf("%d %d %d", &n1, &n2, &n3) ;
    printf("%0.2f\n", triangleArea(n1, n2, n3)) ;
    printf("%0.2f\n", trianglePerimeter(n1, n2, n3)) ;

    return 0 ;
}

float circleArea(int r) 
{
    return (22.0 * r * r) / 7 ;
}

float circlePerimeter(int r) 
{
    return (2 * 22.0 * r) / 7 ;
}

int rectangleArea(int l, int b) 
{
    return l * b ;
}

int rectanglePerimeter(int l, int b)
{
    return 2 * (l + b) ;
}

int squareArea(int n)
{
    return n * n ;
}

int squarePerimeter(int n) 
{
    return 4 * n ;
}

float triangleArea(int a, int b, int c) 
{
    float s = (a+b+c) / 2.0 ;
    return sqrt(s * (s-a) * (s-b) * (s-c)) ;
}

float trianglePerimeter(int a, int b, int c) 
{
    return a + b + c ;
}