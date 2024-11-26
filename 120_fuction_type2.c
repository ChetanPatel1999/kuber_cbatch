// no return type, but with argument function
#include <stdio.h>
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("sum of %d and %d = %d\n", a, b, c);
}
void cube(int num)
{
    int c;
    c = num * num * num;
    printf("cube of %d = %d\n", num, c);
}
void range(int s, int e)
{
    int i;
    for (i =s; i <= e; i++) // 2
    {
        cube(i);
    }
}
void upper(char ch)// ch = 'a'
{
   ch=ch-32; // 97-32 = 65
   printf("upper case : %c\n",ch);
}
// A = 65 B= 66  a = 97 b = 98
void main()
{
    // int x = 34, y = 6;
    // add(12, 7);
    // add(4, 6);
    // add(x, y);
    // cube(4);
    // range(1, 5);
    upper('a');
    upper('b');
    upper('l');
}
