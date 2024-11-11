// wap to print even number serise 1 to n
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter a num : ");
    scanf("%d", &n);//20
    printf("even number serise till %d : ",n);
    while (i <= n)
    {
        if (i%2==0)
        {
            printf("%d ", i);
        }
        i++;
    }
}