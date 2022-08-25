#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
 double radius;       //declarations type changed to double 
 printf("Enter radius:");          //syntax error
 scanf("%lf", &radius);                  //syntax error
printf("volume is : %lf \n", 4 *radius*radius*radius/3 );  //changed format specifier to %g, deleted double escpe sequencese
return 0;
}
