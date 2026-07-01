/*
Practical 3
Prompt user for two integers (first >= second).
Dynamically allocate an array and store all numbers
between them in descending order.
Check for allocation errors, print array, free memory.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int first, second;
    int size;
    int *arr;
    int i;
    int index;

    /* --- INPUT --- */
    printf("Enter first number (>= second): ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);

    /* --- PROCESSING --- */
    size = first - second + 1;

    arr = (int *)malloc(size * sizeof(int));

    /* --- MEMORY CHECK --- */
    if (arr == NULL)
    {
        fprintf(stderr, "Error: memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    /* Fill array in descending order */
    index = 0;
    for (i = first; i >= second; i--)
    {
        arr[index] = i;
        index++;
    }

    /* --- OUTPUT --- */
    printf("Array contains: ");
    for (i = 0; i < size; i++)
    {
        if (i < size - 1)
            printf("%d, ", arr[i]);
        else
            printf("%d\n", arr[i]);
    }

    /* --- FREE MEMORY --- */
    free(arr);
    arr = NULL;

    return EXIT_SUCCESS;
}
