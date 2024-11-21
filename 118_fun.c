#include <stdio.h>
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
void sub() // defination of function
{
    int a, b, c;
    printf("enter frist number = ");
    scanf("%d", &a);
    printf("enter second number = ");
    scanf("%d", &b);
    c = a - b;
    printf("sub of %d and %d = %d\n", a, b, c);
}
void main()
{
    int i;
    for(i=1;i<=5;i++)//4
    {
        add();
        printf("%d calling is complete\n",i);
    }
}
