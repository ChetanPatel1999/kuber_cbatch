// strcmp() := its compare two string
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[50], ch2[50];
    printf("enter string1 : ");
    gets(ch1); // chetan
    printf("enter string2 : ");
    gets(ch2); // patel
    if (strcmp(ch1,ch2)==0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are differnt");
    }
}