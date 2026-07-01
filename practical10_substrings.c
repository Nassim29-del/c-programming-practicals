/*
Practical 10
Take a string and print all substrings of length 3.
Use pointers to traverse the string.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char input[100];
    char *ptr;
    int  length;
    int  i;

    /* --- INPUT --- */
    printf("Enter a string (length >= 3): ");
    scanf("%s", input);

    length = strlen(input);

    if (length < 3)
    {
        fprintf(stderr, "Error: string must be at least 3 characters\n");
        exit(EXIT_FAILURE);
    }

    /* --- OUTPUT SUBSTRINGS --- */
    printf("Substrings of length 3:\n");

    for (i = 0; i <= length - 3; i++)
    {
        ptr = input + i;
        printf("\"%c%c%c\"\n", *ptr, *(ptr + 1), *(ptr + 2));
    }

    return EXIT_SUCCESS;
}
