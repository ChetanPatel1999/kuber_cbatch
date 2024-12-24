//fprintf():- write data into file
// "a" :- append mode not delete privious data  
#include<stdio.h>
void main()
{
  FILE *ptr;
  ptr=fopen("abc.txt","a");
  fprintf(ptr,"hi i am kuber\n");
  fprintf(ptr,"i am student of medicaps collage\n");
  fclose(ptr); 
}