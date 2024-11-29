//wap to take array element from user and display themand also dipslay sum of all element.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d",&n);
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
    //code for sum array elemet
    //12 34 56 78 90
    int sum=0;
    for(i=0;i<n;i++)//1
    {
        sum=sum+a[i];//112
    }
    printf("\nsum of all elements : %d",sum);
}