// wap to take array element from user and display even element.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n);
    int a[n];
    int i;
    printf("enter array element :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array element are :\n");
    for (i = 0; i < n; i++) // 5
    {
        printf("%d ", a[i]);
    }
    printf("\narray even element are :\n");
    for (i = 0; i < n; i++) // 5
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }
}