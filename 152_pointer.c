// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, i;
    ptr = (int *)malloc(5 * sizeof(int));
    temp = ptr;
    printf("enter array element : \n");
    for (i = 0; i < 5; i++) // 5
    {
        scanf("%d", ptr);
        ptr++; // 420
    }
    printf("array element are : \n");
    ptr = temp;             // 400
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d\n", *ptr); // 12 34 56 78 90
        ptr++;                // 404
    }
    ptr = temp;
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("sum : %d", sum);
    ptr = temp;
    free(ptr);
}