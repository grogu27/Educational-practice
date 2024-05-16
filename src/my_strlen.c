#include "../include/my_string_lib.h"

size_t my_strlen(char *string)
{
    int len = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}