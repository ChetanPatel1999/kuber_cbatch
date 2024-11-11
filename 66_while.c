// wap to print sum 1 to n.
#include <stdio.h>
void main()
{
    int i = 1, n, sum = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 20
    while (i <= n)
    {
        sum = sum + i; 
        i++;           
    }
    printf("sum of 1 to %d = %d", n, sum);
}