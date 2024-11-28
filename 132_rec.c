#include<stdio.h>
void fun(int n)//3
{
    printf("hi students\n");
    if(n>1)
    {
        fun(n-1);
    }
    printf("by students\n");
}
void main()
{
  fun(3);
}