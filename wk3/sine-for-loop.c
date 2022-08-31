#include<stdio.h>
#include<math.h> 
int main(void)
{ 
double interval;
int i;   // define i as integer
for(i = 0; i <11; i++)       // when i = 11 jump out the loop which simulate i= 0 - 10
{
 interval = i/10.0;               // change the range to 0 - 1 
 printf("sin( %g ) = %lf , cos( %g ) = %lf \n", interval, sin(interval), interval , cos(interval));  
 //start the calculation and output, use \n function to make more elegant
}
return 0;
}


