//wap to print day name according to number.
#include<stdio.h>
void main()
{
 int num;
 printf("enter a num : ");
 scanf("%d",&num); // 1
 if(num==1)
 {
   printf("monday");
 }
 else if (num ==2)
 {
    printf("tuesday");
 }
 else if (num ==3)
 {
    printf("wednusday");
 }
 else if (num ==4)
 {
    printf("thursday");
 }
 else if (num ==5)
 {
    printf("friday");
 }
 else if (num ==6)
 {
    printf("saturday");
 }
 else if (num ==7)
 {
    printf("sunday");
 }
 else{
   printf("enter num 1 to 7"); 
 }
}