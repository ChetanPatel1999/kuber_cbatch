// example of break stmnt
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 8
    {
        printf("%d ", i); //1 
        if (i < 7)
        {
            break;
        }
    }
}