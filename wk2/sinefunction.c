#include<stdio.h>
#include <math.h>
#define PI 3.1415926    //define PI

int main(void)
{
double x;    //define X type

printf("Input a number betwen 0 and 1: ");          //data input 
scanf("%lf", &x);                          //read data as float 
if ( x > 0 && x < 1) {                        //check the number range
printf("The sine of x is %lf\n", sin(x * PI / 180) );          //match, start the calculation
}
else if (x >= 1 ){
    printf("you wrote a wrong number!!!\n");                // not match, output hint and stop the programme
    return 0;
}
else if (x <= 0 ){
    printf("you wrote a wrong number!!!\n");                // not match, output hint and stop the programme
    return 0;
}
return 0;  
}


