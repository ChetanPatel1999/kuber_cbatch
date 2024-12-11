// pointer to array
#include <stdio.h>
void main()
{
    int arr[5];
    int *ptr, i;
    ptr = &arr[0];//400
    printf("enter array element : \n");
    for(i=0;i<5;i++)//5
    {
        scanf("%d",ptr);
        ptr++;//420
    }
    //12 34 56 78 90
    printf("array reverse element are : \n");
    for (i = 0; i < 5; i++)//5
    {
        ptr--;//416
        printf("%d\n", *ptr);
    }
}