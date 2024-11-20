#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 4; i++)//1
    {
        for (j = 1; j <= 4; j++)//3
        {
           if(j%2==1)
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
// 1 0 1 0
// 1 0 1 0
// 1 0 1 0
// 1 0 1 0
