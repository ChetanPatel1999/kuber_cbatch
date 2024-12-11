#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr1,i;
    ptr1 = (int *)calloc(5 , sizeof(int));
    printf("array element are : \n") ;    
    for (i = 0; i < 5; i++) 
    {
        printf("%d\n", *ptr1); 
        ptr1++;                
    }
}