#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 1
    {
        for (j = 1; j <= 5; j++) // 3
        {
         if(i==1 || i==5 || j==1 || j==5)
         {
             printf("* ");
         }
         else{
            printf("  ");
         }
        }
        printf("\n");
    }
}

