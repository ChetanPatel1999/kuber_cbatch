//fgets():- take string from user
//fputs():- dispaly string on output screen
#include<stdio.h>
void main()
{
  char ch[50];
  printf("enter name : ");
  fgets(ch,50,stdin);
  fputs(ch,stdout);
  printf("\nname : %s",ch);
}