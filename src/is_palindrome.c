#include "../include/my_string_lib.h"

// Функция для проверки является ли строка палиндромом
int is_palindrome(char *str) {
    int len = my_strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; 
        }
    }
    return 1; 
}