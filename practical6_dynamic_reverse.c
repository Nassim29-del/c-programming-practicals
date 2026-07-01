/*
Practical 6
Dynamically allocate an array of N integers and reverse it.
Print original and reversed arrays. Free memory.
*/
#include <stdio.h>
#include <stdlib.h>

void reverse_array(int *arr, int size);

int main(void)
{
    int n;
    int *arr;
    int i;

    /* --- INPUT --- */
    printf("Enter size of array (N > 0): ");
    scanf("%d", &n);

    /* --- ALLOCATE --- */
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        fprintf(stderr, "Error: memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    /* --- OUTPUT ORIGINAL --- */
    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    /* --- REVERSE --- */
    reverse_array(arr, n);

    /* --- OUTPUT REVERSED --- */
    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    /* --- FREE --- */
    free(arr);
    arr = NULL;

    return EXIT_SUCCESS;
}

void reverse_array(int *arr, int size)
{
    int *left  = arr;
        int *right = arr + size - 1;
            int temp;

                while (left < right)
                    {
                            temp   = *left;
                                    *left  = *right;
                                            *right = temp;
                                                    left++;
                                                            right--;
                                                                }
                                                                }
