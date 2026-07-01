/*
Practical 7
Write a function replaceVowels that replaces all vowels
in a string with *.
Function signature: void replaceVowels(char* str);
*/
#include <stdio.h>
#include <stdlib.h>

void replaceVowels(char *str);

int main(void)
{
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    replaceVowels(input);

    printf("Modified string: %s\n", input);

    return EXIT_SUCCESS;
}

void replaceVowels(char *str)
{
    char *ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||
            *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' ||
            *ptr == 'O' || *ptr == 'U')
        {
            *ptr = '*';
        }
        ptr++;
    }
}
