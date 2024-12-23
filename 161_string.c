// iterate string character using null character
#include <stdio.h>
void main()
{
    char name[] = "chetan patel is my name";
    int i;
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        printf("%c ", name[i]);
    }
}