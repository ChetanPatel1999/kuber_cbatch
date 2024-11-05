//pre post 
#include<stdio.h>
void main()
{
  int a=12,b;
  b=++a;//pre increment frist increse value of a by 1 than assign in b
  // b=a++;//post increament first assign a value in b than incrase a by 1
  printf("a = %d\n",a);//13
  printf("b = %d\n",b);//13

}