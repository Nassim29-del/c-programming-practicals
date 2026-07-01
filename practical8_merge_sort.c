/*
Practical 8
Create two integer arrays, merge them into one,
sort in ascending order using bubble sort, print result.
All arrays dynamically allocated.
*/
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *arr, int size);

int main(void)
{
    int size1, size2;
    int *arr1;
    int *arr2;
    int *merged;
    int i;
    int total;

    /* --- INPUT ARRAY 1 --- */
    printf("Enter size of first array: ");
    scanf("%d", &size1);

    arr1 = (int *)malloc(size1 * sizeof(int));
    if (arr1 == NULL)
    {
        fprintf(stderr, "Error: memory allocation failed for array 1\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter %d elements: ", size1);
    for (i = 0; i < size1; i++)
        scanf("%d", &arr1[i]);

    /* --- INPUT ARRAY 2 --- */
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    arr2 = (int *)malloc(size2 * sizeof(int));
    if (arr2 == NULL)
    {
        fprintf(stderr, "Error: memory allocation failed for array 2\n");
        free(arr1);
        exit(EXIT_FAILURE);
    }

    printf("Enter %d elements: ", size2);
    for (i = 0; i < size2; i++)
        scanf("%d", &arr2[i]);

    /* --- MERGE --- */
    total  = size1 + size2;
    merged = (int *)malloc(total * sizeof(int));
    if (merged == NULL)
    {
        fprintf(stderr, "Error: memory allocation failed for merged array\n");
        free(arr1);
        free(arr2);
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < size1; i++)
        merged[i] = arr1[i];

    for (i = 0; i < size2; i++)
        merged[size1 + i] = arr2[i];

    /* --- SORT --- */
    bubble_sort(merged, total);

    /* --- OUTPUT --- */
    printf("Sorted merged array: ");
    for (i = 0; i < total; i++)
        printf("%d ", merged[i]);
    printf("\n");

    /* --- FREE --- */
    free(arr1);
    free(arr2);
    free(merged);
    arr1   = NULL;
    arr2   = NULL;
    merged = NULL;

    return EXIT_SUCCESS;
}

void bubble_sort(int *arr, int size)
{
    int i, j;
    int temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                temp           = *(arr + j);
                *(arr + j)     = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
