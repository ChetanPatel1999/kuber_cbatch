#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//4
    {
        for (j = 5; j >= 1; j--)//6
        {
            printf("%d ",j);
        }

        printf("\n");
    }
}
