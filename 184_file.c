//fputc() :-// write single char in file
#include<stdio.h>
void main()
{
  FILE *ptr;
  char ch='K';
  ptr=fopen("abc.txt","w");
  fputc('H',ptr);
  fputc(ch,ptr);
  fclose(ptr);
}