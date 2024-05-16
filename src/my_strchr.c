#include "../include/my_string_lib.h"

char *my_strchr(char *str, char ch)
{
  while (*str != '\0')
  {
    if (*str == ch)
      return str;
    str++;
  }
  return NULL;
}