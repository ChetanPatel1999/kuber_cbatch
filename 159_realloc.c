#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i, *temp;
    ptr = (int *)malloc(5 * sizeof(int));
    temp = ptr;
    printf("adress of memory: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;
    ptr = realloc(ptr, 8 * sizeof(int));
    if(ptr==NULL)
    {
        printf("memory is not allocate \n");
        return 1;
    }
    printf("\nadress of increase memory: ");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;
    free(ptr);
}