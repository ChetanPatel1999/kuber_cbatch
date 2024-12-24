// strupr() := its convert string in uper case later
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[50];
    printf("enter string : ");
    gets(ch);
    printf("string : %s\n", ch);
    strupr(ch);
    printf("uper string : %s\n", ch);
}