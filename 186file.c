//fgets():-read whole line from file
//fputs():-write one line in file
#include<stdio.h>
void main()
{
  FILE *ptr;
  char ch[50];
  ptr=fopen("facto.txt","r");
  fgets(ch,50,ptr);
  printf("%s",ch);
  fgets(ch,50,ptr);
  printf("%s",ch);
  fclose(ptr);
}