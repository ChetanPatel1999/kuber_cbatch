// pointer to array
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr, i;
    ptr = &arr[0];
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d\n", *ptr); // 12 34 56 78 90
        ptr++;               // 420
    }
}