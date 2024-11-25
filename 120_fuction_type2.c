// no return type, but with argument function
#include <stdio.h>
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("sum of %d and %d = %d\n", a, b, c);
}
void cube(int n)
{
    int c;
    c = n * n * n;
    printf("cube of %d = %d\n", n, c);
}
void upper(char ch) // ch='a';
{
    ch = ch - 32; // 65
    printf("uper case : %c\n", ch);
}
void factorial(int num) // 5
{
    int i, fact = 1;
    for (i = 1; i <= num; i++) // 6
    {
        fact = fact * i; // 120
    }
    printf("factorila of %d = %d\n", num, fact);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++) // 3
    {
        factorial(i);
    }
}
void main()
{
    int x = 3, y = 9;
    add(x, y);
    add(12, 6);
    add(8, 4);
    cube(3);
    upper('l');
    range(1, 5);
    range(7,9);
    
}
