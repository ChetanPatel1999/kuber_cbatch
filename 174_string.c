// strcat() := its combine two string
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[50], ch2[50];
    printf("enter string1 : ");
    gets(ch1); // chetan
    printf("enter string2 : ");
    gets(ch2); // patel
    printf("string ch1 : %s\n", ch1);
    printf("string ch2 : %s\n", ch2);
    strcat(ch1,ch2);
    printf("string ch1 : %s\n", ch1);
    printf("string ch2 : %s\n", ch2);
}