#include "../include/my_string_lib.h"

// Функция для удаления подстроки из строки
int my_rem(char *str, char *text) {
  int len_str = my_strlen(str);
  int len_text = my_strlen(text);
  
  if (len_str < len_text)
    return -1; 
  
  int count = 0;
  for (int i = 0; i < len_str; i++) {
    if (str[i] == text[count]) {
      count++;
    } else {
      count = 0;
    }
    if (count == len_text) {
      for (int j = i - len_text + 1; j < len_str; j++) {
        str[j] = str[j + len_text];
      }
      str[len_str - len_text] = '\0';
      break;
    }
  }
  return 0;
}