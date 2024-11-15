// wap to print number even number 1 to 20.
#include <stdio.h>
void main()
{
    int i;
    i = 1;
lable:
    if (i % 2 == 0)
    {
        printf("%d  ", i);//2 4 6
    }
    i++;//7
    if (i <= 20)
    {
        goto lable;
    }
}