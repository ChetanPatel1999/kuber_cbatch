//wap to find length of string.
#include<stdio.h>
#include<string.h>
void main()
{
  char ch[50];
  int i,c=0;
  printf("enter a string : ");
  gets(ch);//chetan
  printf("string : %s\n",ch);
  for(i=0;ch[i]!='\0';i++)//6
  {
    c++;
  }
  printf("length of string : %d",c);
}