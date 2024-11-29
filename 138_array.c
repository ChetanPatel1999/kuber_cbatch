#include <stdio.h>
void main()
{
    int a[5];
    int i;
    printf("enter array element :\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array element are :\n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", a[i]);
    }
}