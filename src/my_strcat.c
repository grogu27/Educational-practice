#include "../include/my_string_lib.h"

char *my_strcat(char *str, char *str2)
{
  int len1 = my_strlen(str);
  int len2 = my_strlen(str2);
  for (int i = 0; i < len2; i++)
    str[i + len1] = str2[i];
  str[len1 + len2] = '\0';
  return str;
}