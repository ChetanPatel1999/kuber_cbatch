#include<stdio.h>
void fun(int n)//3
{
    printf("%d ",n);
    if(n>1)
    {
        fun(n-1);
    }
     printf("%d ",n);
}
void main()
{
  fun(3);
}