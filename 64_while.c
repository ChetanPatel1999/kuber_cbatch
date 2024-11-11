// wap to print number 1 to n
#include <stdio.h>
void main()
{
    int i=1,n;
    printf("enter a num : ");
    scanf("%d",&n);
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
}