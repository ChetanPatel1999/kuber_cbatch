// pointer to array
//wap to print sum of all array element using pointer.
#include <stdio.h>
void main()
{
    int arr[5];
    int *ptr,*temp, i;
    ptr = &arr[0];
    temp=ptr;//400
    printf("enter array element : \n");
    for (i = 0; i < 5; i++) // 5
    {
        scanf("%d", ptr);
        ptr++; // 420
    }
    printf("array element are : \n");
    ptr = temp;          // 400
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d\n", *ptr); // 12 34 56 78 90
        ptr++;                // 420
    }
    int sum = 0;
    ptr = temp;
    for (i = 0; i < 5; i++) // 1
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("sum of all element : %d",sum);
}