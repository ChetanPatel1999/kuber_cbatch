//no return type no argument function
#include <stdio.h>
void add() 
{
    int a, b, c;
    printf("enter frist number = ");
    scanf("%d", &a);
    printf("enter second number = ");
    scanf("%d", &b);
    c = a + b;
    printf("sum of %d and %d = %d\n", a, b, c);
}
void cube()
{
    int c,n;
    printf("enter a num : ");
    scanf("%d",&n);
    c=n*n*n;
    printf("cube of %d = %d\n",n,c);
}
void main()
{
  cube();
}
