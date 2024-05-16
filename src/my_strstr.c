#include "../include/my_string_lib.h"

char *my_strstr(char *str, char *substr)
{
  int len1 = my_strlen(str);
  int len2 = my_strlen(substr);
  for (int i = 0; i <= len1 - len2; ++i) 
  {
    int j = 0;
    while (j < len2 && str[i + j] == substr[j])
         ++j;
    if (j == len2)
      return &str[i];
  }
    
    return NULL;
}
