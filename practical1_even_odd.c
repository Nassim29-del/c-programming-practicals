/*
Practical 1
Write a function that takes an array and prints
the count of even and odd numbers.
*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

void count_even_odd(int arr[], int size);

int main(void)
{
    int numbers[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i;

    printf("Array: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", numbers[i]);
    printf("\n");

    count_even_odd(numbers, SIZE);

    return EXIT_SUCCESS;
}

void count_even_odd(int arr[], int size)
{
    int i;
    int even_count = 0;
    int odd_count  = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    printf("Even count: %d\n", even_count);
    printf("Odd  count: %d\n", odd_count);
}
