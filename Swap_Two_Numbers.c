#include<stdio.h>

// ---> C Program to Swap Two Numbers

int main()
{

    float first, second, temp;   // --> variable declaration 

    printf("Enter a first number : ");
    scanf("%f", &first);

    printf("Enter a second number : ");
    scanf("%f", &second);

    temp = first;    // --> value of first is assigned to temp
    first = second;  // --> value of second is assigned to first
    second = temp;   // --> value of temp (initial value of first) is assigned to second


    // --->  %.2f displays number up to 2 decimal points

    printf("\nafter swapping, first number = %.2f\n", first);
    printf("after swapping, second number = %.2f", second);

  return 0;
}
