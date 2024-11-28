// example of recursion
// wap to print msg five times.
#include <stdio.h>
void fun()
{
    static int i=1; //its run in programm only once time
    printf("hello students\n");//3
    i++; //4
    if (i <= 5)
    {
        fun();
    }  
}
void main()
{
    fun();
}