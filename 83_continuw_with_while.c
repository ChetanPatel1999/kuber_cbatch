// continue stmnt with while loop
#include<stdio.h>
void main()
{
 int i;
 i=0;
 while(i<10)
 {
    i++;//11
    if(i==5)
    {
        continue;
    }
    printf("%d ",i);// 1 2 3 4 6 7 8 9 10 
 }
}