// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, i, n;
    printf("enter dynamic array size :");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("enter array element : \n");
    for (i = 0; i < n; i++) // 5
    {
        scanf("%d", &ptr[i]);
    }
    printf("array element are : \n"); // 400
    for (i = 0; i < n; i++)           // 5
    {
        printf("%d\n", ptr[i]); // 12 34 56 78 90                // 404
    }
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + ptr[i];
    }
    printf("sum : %d", sum);
    free(ptr);
}