// example of recursion
// wap to print msg five times.
#include <stdio.h>
void main()
{
    static int i=1;
    printf("hello students\n");
    i++;
    if (i <= 5)
    {
        main();
    }
}