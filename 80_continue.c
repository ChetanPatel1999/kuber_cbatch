// example of continue
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++)//11
    {
        if(i<5)
        {
            continue;
        } 
        printf("%d ", i);// 5 6 7 8 9 10
    }
}