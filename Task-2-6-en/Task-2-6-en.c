#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int args, char* argv[])
{
    unsigned int n; // the number whose "root" is to be found.
    unsigned int m; // the "root" of the number.
    printf("Enter a number: ");
    scanf("%u", &n);
    m = n; // Initial value for the "root" of the number
    while (m > 9)  // Outer loop: repeat until the number becomes a single digit
    {
        unsigned int s = 0; // Sum of the digits of the number
        while (m > 0)  // Inner loop: repeat while the number is greater than zero
        {
            s = s + m % 10; // Calculate the sum of the digits. 
            m = m / 10; // Reduce the number by a factor of 10.
        }
        m = s; // Intermediate value for the "root" of the number
    }
    // Display the original number and its "root"
    printf("The \"root\" of the number %u is %u\r\n", n, m);
    // Pause the output until the "Enter" key is pressed
    getchar();
    getc(stdin);
    return 0;
}