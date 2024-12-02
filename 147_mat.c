// wap to take matrix element from user and display them.
// ans also display sum of all element and avrage.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter column : ");
    scanf("%d", &c);
    int mat[r][c];
    int i, j;
    printf("enter matrix element :\n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            printf("enter element pos[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix element are : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // code for sum of matrix element
    float sum = 0;
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 3
        {
            sum = sum + mat[i][j];
        }
    }
    printf("sum of matrix element is : %f\n", sum);
    float ave;
    ave = sum / (r * c);
    printf("avrege of matrix : %.2f", ave);
}