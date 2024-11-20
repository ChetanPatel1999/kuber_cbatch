#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 4; i++)//5
    {
        for (j = 1; j <= 4; j++)//2
        {
           if(i>2)
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
// 0 0 0 0 
// 0 0 0 0 
// 1 1 1 1 
// 1 1 1 1 