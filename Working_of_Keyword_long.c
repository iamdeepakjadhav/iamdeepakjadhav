#include <stdio.h>

// --> C Program to Demonstrate the Working of Keyword long

int main()
{
    
    // --> variable declaration 
    int a;
    long b;   // ---> Equivalent to long int b;
    long long c;  // ---> Equivalent to long long int c;
    double e;
    long double f;


    printf("Size of int = %d bytes \n", sizeof(a));

    printf("Size of long int = %d bytes\n", sizeof(b));

    printf("Size of long long int = %d bytes\n", sizeof(c));

    printf("Size of double = %d bytes\n", sizeof(e));

    printf("Size of long double = %d bytes\n", sizeof(f));

    
    return 0;
}


/*
--> The size of the data type bytes is

int	= 2,4
char = 1
float = 4
double = 8	
long double = 12 or 16
short int = 2
long int = 4,8
long long int = 8
unsigned long int = 4
unsigned long long int = 8

*/
