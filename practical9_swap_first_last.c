/*
Practical 9
Write a function swapFirstLast that swaps the first
and last elements of an integer array.
Function signature: void swapFirstLast(int* arr, int size);
*/
#include <stdio.h>
#include <stdlib.h>

void swapFirstLast(int *arr, int size);

int main(void)
{
    int size;
    int *arr;
    int i;

    /* --- INPUT --- */
    printf("Enter array size: ");
    scanf("%d", &size);

    if (size < 2)
    {
        fprintf(stderr, "Error: array must have at least 2 elements\n");
        exit(EXIT_FAILURE);
    }

    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        fprintf(stderr, "Error: memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    /* --- BEFORE --- */
    printf("Before: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    /* --- SWAP --- */
    swapFirstLast(arr, size);

    /* --- AFTER --- */
    printf("After : ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    /* --- FREE --- */
    free(arr);
    arr = NULL;

    return EXIT_SUCCESS;
}

void swapFirstLast(int *arr, int size)
{
    int temp;

    temp        = *arr;
    *arr        = *(arr + size - 1);
    *(arr + size - 1) = temp;
}
