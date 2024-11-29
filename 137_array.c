#include <stdio.h>
void main()
{
    int a[5] = {121, 434, 56, 78, 90};
    int i;
    printf("array element adresss are :\n");
    printf("%d \n", a);// its also print base address
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d \n", &a[i]);
    }
}