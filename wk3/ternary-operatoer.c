#include <stdio.h>
int main()
{
    int speed;
    printf("\n Enter your speed as integer:");
    scanf("%d" , &speed);
    speed = (speed <= 65)? (65) : (speed <= 70)? (70) : (90);
    switch (speed)
    {
    case 65: printf("\n No speeding Ticket\n\n"); break;
    case 70: printf("\n Speeding Ticket\n\n"); break;
    case 90: printf("\n Expensive Speeding Tichket\n\n"); break;
    default: printf("\n Incorrect speed\n\n"); 

    }
    return 0;
}


