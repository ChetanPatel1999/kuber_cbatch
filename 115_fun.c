#include <stdio.h>
void add(); // function declaration
void main()
{
    printf("hi i am main function \n");
    add(); // function calling
    printf("end main fuction");
}
void add() // defination of function
{
    int a, b, c;
    printf("enter frist number = ");
    scanf("%d", &a);
    printf("enter second number = ");
    scanf("%d", &b);
    c = a + b;
    printf("sum of %d and %d = %d\n", a, b, c);
}