// pointer to array
#include <stdio.h>
void main()
{
    int arr[5];
    int *ptr, i;
    ptr = &arr[0];
    printf("enter array element : \n");
    for(i=0;i<5;i++)//5
    {
        scanf("%d",ptr);
        ptr++;//420
    }
    printf("array element are : \n");
    ptr=&arr[0];
    for (i = 0; i < 5; i++)//5
    {
        printf("%d\n", *ptr);//12 34 56 78 90
        ptr++;//420
    }
}