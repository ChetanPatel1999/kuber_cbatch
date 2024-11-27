// with return type , with argument
#include <stdio.h>
int cube()
{
    int c, num;
    printf("enter a num :");
    scanf("%d", &num);
    c = num * num * num;
    return c;
}
int greatest()
{
    int num1, num2;
    printf("enter frist number = ");
    scanf("%d", &num1);
    printf("enter second number = ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
float cricle_area() // 4.5
{
    float area,r;
    printf("enter number = ");
    scanf("%f", &r);
    area = 3.141 * r * r;
    return area;
}
void main()
{
    int res = cube();
    printf("cube = %d\n", res);
    printf("cube = %d\n", cube());
    printf("gretest num = %d\n", greatest());
    printf("area = %.1f\n", cricle_area());
}