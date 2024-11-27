// with return type , with argument
#include <stdio.h>
int cube(int num)
{
    int c;
    c = num * num * num;
    return c;
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++)
    {
        printf("cube of %d = %d\n", i, cube(i));
    }
}
int greatest(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
float cricle_area(float r)//4.5
{
    float area;
    area=3.141*r*r;
    return area;
}
void main()
{
    printf("cube of 4= %d\n", cube(4));
    range(1, 5);
    printf("gretest num = %d \n",greatest(456,78));
    printf("gretest num = %d \n",greatest(456,788));
    float a=cricle_area(4.5);
    printf("area of circle :  %.2f",a);
}