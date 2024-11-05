// wap to make a calculater using switch case.
#include <stdio.h>
void main()
{
    int num, a, b, c;
    printf("welcome to my calculater : \n");
    printf("press 1 for add : \n");
    printf("press 2 for sub : \n");
    printf("press 3 for mul : \n");
    printf("press 4 for div : \n");
    printf("enter a num : ");
    scanf("%d", &num); // 2
    switch (num)
    {
    case 1:
        printf("your choise is addition : \n");
        printf("enter frist number : ");
        scanf("%d", &a);
        printf("enter second number : ");
        scanf("%d", &b);
        c = a + b;
        printf("sum = %d\n", c);
        break;
    case 2:
        printf("your choise is subtraction : \n");
        printf("enter frist number : ");
        scanf("%d", &a);
        printf("enter second number : ");
        scanf("%d", &b);
        c = a - b;
        printf("sub = %d\n", c);
        break;
    case 3:
        printf("your choise is multiplication : \n");
        printf("enter frist number : ");
        scanf("%d", &a);
        printf("enter second number : ");
        scanf("%d", &b);
        c = a * b;
        printf("mul = %d\n", c);
        break;
    case 4:
        printf("your choise is division : \n");
        printf("enter frist number : ");
        scanf("%d", &a);
        printf("enter second number : ");
        scanf("%d", &b);
        c = a / b;
        printf("div = %d\n", c);
        break;
    default : printf("please enter 1 to 4") ;   
    }

}