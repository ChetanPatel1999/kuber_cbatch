#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--)//4
    {
        for (j = 1; j <= i; j++)//
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}