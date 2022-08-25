#include <stdio.h>

int main(void)
{
    int a = 3 , b = 4 , c = -2 , d = 0;  //initialize
    d = ++a + b++ ;
    printf("a = %d , b = %d , c = %d d = %d\n" , a , b , c ,d);

    return 0;
}


