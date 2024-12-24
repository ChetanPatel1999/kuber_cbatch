#include<stdio.h>
void main()
{
  FILE *ptr;
  ptr=fopen("abc.txt","w");
  fclose(ptr); //close the file
}