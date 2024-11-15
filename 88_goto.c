//wap to print a msg 5 times using go to stmnt.
#include<stdio.h>
void main()
{
  int i;
  i=1;
  printf("hi students\n");
  i++;//2
  if(i<=5)
  {
    goto lab;
  }
  printf("before lable\n");
  lab:
  printf("after lable ");
}