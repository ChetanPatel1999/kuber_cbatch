// example of recursion
// wap to print number given range using recursion.
#include <stdio.h>
void number(int s,int e)
{
    printf("%d ",s);//12 13 14
    s++;//15
    if (s <= e)
    {
        number(s,e);
    }  
}
void main()
{
    number(12,56);
    printf("\n");
    number(1,10);
}