// example of recursion
// wap to print msg five times.
#include <stdio.h>
int i = 1;//global variable
void fun()
{
    printf("hello students\n");//5
    i++; //6
    if (i <= 5)
    {
        fun();
    }  
}
void main()
{
    fun();
}