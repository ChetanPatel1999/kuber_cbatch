#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 4; i++)//2
    {
        for (j = 1; j <= 4; j++)//5
        {
           if(j>2)
           {
             printf("1 ");
           }
           else{
             printf("0 "); 
           }
        }
        printf("\n");
    }
}
// 0 0 1 1 
// 0 0 1 1 
// 0 0 1 1 
// 0 0 1 1 