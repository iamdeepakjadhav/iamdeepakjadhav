#include <stdio.h>

// ---> C Program to Check Whether a Number is Even or Odd

int main()
{
    int number; // --> Variable declaration

    printf("ennter a number : ");
    scanf("%d", &number);

    // --> use if else statement
    if (number % 2 == 0)
    {
        printf("your entered number --> %d is Even.", number);
    }
    else
    {
        printf("your entered number --> %d is Odd.", number);
    }

    return 0;
}