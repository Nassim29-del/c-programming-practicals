/*
Practical 5
Write a function modifyValues() that uses pointers.
If the first number is positive, multiply it by 2.
If the second number is negative, multiply it by -1.
*/
#include <stdio.h>
#include <stdlib.h>

void modifyValues(int *a, int *b);

int main(void)
{
    int num1, num2;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before: %d and %d\n", num1, num2);

    modifyValues(&num1, &num2);

    printf("After : %d and %d\n", num1, num2);

    return EXIT_SUCCESS;
}

void modifyValues(int *a, int *b)
{
    if (*a > 0)
        *a = *a * 2;

    if (*b < 0)
        *b = *b * -1;
}
