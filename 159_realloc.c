#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i, *temp;
    ptr = (int *)malloc(5 * sizeof(int));
    temp = ptr;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = temp;
    printf("address of memory and value: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d= %d \n", ptr,*ptr);
        ptr++;
    }
    ptr = temp;
    ptr = (int *)realloc(ptr, 8 * sizeof(int));
    printf("address of memory and value: \n");
    for (i = 0; i < 8; i++)
    {
        printf("%d= %d \n", ptr,*ptr);
        ptr++;
    }
    ptr = temp;
    free(ptr);
}