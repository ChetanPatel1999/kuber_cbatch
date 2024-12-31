#include<stdio.h>
enum day{mon=12,tue,wed=90,thu,fri,sat,sun};
void main()
{
    int a;
    const float pi=3.141;
    a=mon;
    printf("mon = %d\n",mon);
    printf("tue = %d\n",tue);
    printf("wed = %d\n",wed);
    printf("thu = %d\n",thu);
    printf("fri = %d\n",fri);
    printf("sat = %d\n",sat);
    printf("sun = %d\n",sun);
}