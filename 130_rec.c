// example of recursion
// wap to print number even number using recursion.
#include <stdio.h>
void even_number()
{
    static int i=1;
    if(i%2==0)
    {
        printf("%d ",i);
    }
    i++;
    if (i <= 20)
    {
        even_number();
    }  
}
void main()
{
    even_number();
}