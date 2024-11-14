// example of break stmnt
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++)//7
    {
        if(i==5)
        {
         break;
        }
        printf("%d ", i);// 1 2 3 4 
    }
    
}