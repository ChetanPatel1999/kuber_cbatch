#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--)//3
    {
        for (j = i; j <= 5; j++)//
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}