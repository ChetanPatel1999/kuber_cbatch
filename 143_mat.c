// example of 2 D array to store a 3 * 2  matrix
#include <stdio.h>
void main()
{
    //      r  c
    int mat[3][2] = {
        {12, 34},
        {11, 22},
        {12, 13}};
    int i, j;
    printf("matrix element are : \n");
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 2; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}