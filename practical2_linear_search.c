/*
Practical 2
Write a function int linearSearch(int arr[], int size, int key)
that returns the index of key, or -1 if not found.
*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int linearSearch(int arr[], int size, int key);

int main(void)
{
    int numbers[SIZE] = {10, 25, 3, 47, 8, 99};
    int key    = 47;
    int result;
    int i;

    printf("Array: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", numbers[i]);
    printf("\n");

    result = linearSearch(numbers, SIZE, key);

    if (result != -1)
        printf("Key %d found at index %d\n", key, result);
    else
        printf("Key %d not found\n", key);

    return EXIT_SUCCESS;
}

int linearSearch(int arr[], int size, int key)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}
