#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//2
    {
        for (j = 5; j >= 1; j--)//3
        {
            printf("%d ",j);// 5 4 3 2 1
        }

        printf("\n");
    }
}
