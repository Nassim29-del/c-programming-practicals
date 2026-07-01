/*
Practical 4
Write a function swapMiddleChars that takes two strings
and swaps their middle characters.
Assume both strings have odd length and at least 3 characters.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapMiddleChars(char *str1, char *str2);

int main(void)
{
    char word1[] = "plane";
    char word2[] = "track";

    printf("Before: \"%s\" and \"%s\"\n", word1, word2);

    swapMiddleChars(word1, word2);

    printf("After : \"%s\" and \"%s\"\n", word1, word2);

    return EXIT_SUCCESS;
}

void swapMiddleChars(char *str1, char *str2)
{
    int mid1 = strlen(str1) / 2;
    int mid2 = strlen(str2) / 2;
    char temp;

    temp         = str1[mid1];
    str1[mid1]   = str2[mid2];
    str2[mid2]   = temp;
}
