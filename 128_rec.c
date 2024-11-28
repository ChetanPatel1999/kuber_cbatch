// example of recursion
// wap to print number 1 to 10 using recursion.
#include <stdio.h>
void number()
{
    static int i=1;
    printf("%d\n",i);
    i++;
    if (i <= 10)
    {
        number();
    }  
}
void main()
{
    number();
}