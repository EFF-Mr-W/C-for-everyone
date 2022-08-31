#include <stdio.h>
#include <math.h>

/* count blanks , digits, and total characters */
//This programme output is blank, don't know what's wrong
int main() 
{
    int blanks = 0 , digits = 0 , total_chars = 0;
    int c; 
    for(; (c = getchar()) !=EOF ; total_chars++ )
    {
        if (c == ' ')
            ++blanks;
        else if (c >= '0' && c <= '9')
            ++digits;
    };
    printf("blank = %d , digits = %d , total_chars = %d\n\n" , blanks , digits , total_chars);
    
    return 0;
};


