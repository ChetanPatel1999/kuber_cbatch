// fscanf():- read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[50];
    int stop;
    ptr = fopen("facto.txt", "r");
    while (1)
    {
        stop = fscanf(ptr, "%s", ch);
        if(stop==EOF)// EOF = -1
        {
            break;
        }
        printf("%s ", ch);
    }
    fclose(ptr);
}