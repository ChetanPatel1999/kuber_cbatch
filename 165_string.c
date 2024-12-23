//gets():- take string from user
//puts():- dispaly string on output screen
#include<stdio.h>
void main()
{
  char ch[50];
  printf("enter name : ");
  gets(ch);
  puts(ch);
  printf("name : %s",ch);
}