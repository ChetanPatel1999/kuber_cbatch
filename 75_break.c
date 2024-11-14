// example of break stmnt
// this progarmm not make any sens
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 7
    {
        break;
        printf("%d ", i); // 1
    }
    printf("after for loop");
}