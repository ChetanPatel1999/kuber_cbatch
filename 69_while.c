// wap to factorial  of given number.
// 5 = 120
#include <stdio.h>
void main()
{
    int i, n, fact = 1;
    printf("enter a num : ");
    scanf("%d", &n); // 5
    i = 1;
    while (i <= n)
    {
        fact = fact * i;//120
        i++;//6
    }
    printf("factorial of %d = %d",n,fact);
}