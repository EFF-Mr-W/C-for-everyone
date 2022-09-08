#include<stdio.h>
#include <string.h>
int main(void)
{
    const int SIZE = 5;
     /*Variable sized arrays cannot be initialized in the C language.
    You need to initialize them manually
    C++ compiler shoulde not be used to compile C code*/
    int grades[SIZE];
    memcpy(grades, (int[]){78, 67, 92, 83, 88} , sizeof(grades)); 

    double sum = 0.0;
    double *ptr_to_sum = &sum;
    int i;

    printf ("\n my grades are: \n");

    for (i = 0; i < SIZE; i++)
        printf("%d\t" , grades[i]);
    
    printf("\n\n");

    for ( i = 0 ; i < SIZE ; i++)
        sum = sum + grades[i];

    printf("my average is %.2f\n\n" , *ptr_to_sum/SIZE);
    
    return 0;
};