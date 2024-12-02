// example of 2 D array to store a 3 * 3  matrix
#include <stdio.h>
void main()
{
    int mat[3][3] = {
        {12, 34, 56},
        {11, 22, 33},
        {12, 13, 14}};
    int i, j;
    printf("matrix element are : \n");
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}