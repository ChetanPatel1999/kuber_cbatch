#include<stdio.h>
typedef int i;
typedef long long int lli;
typedef double dl;
struct student_of_10_class
{
 int rno;
 float per;
};
typedef struct student_of_10_class s10;
void main()
{
   s10 s1,s2,s3; 
   i a;
   lli b;
   dl d;
   printf("size of int : %d\n",sizeof(a));
   printf("size of long long int : %d\n",sizeof(b));
   printf("size of double : %d\n",sizeof(d));
}