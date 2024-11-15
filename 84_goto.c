//wap to print a msg 5 times using go to stmnt.
#include<stdio.h>
void main()
{
  int i;
  i=1;
  lab:
  printf("hi students\n");
  i++;//6
  if(i<=5)
  {
    goto lab;
  }
}