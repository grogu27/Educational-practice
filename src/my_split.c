#include "../include/my_string_lib.h"

// Функция для разделения строки на подстроки с помощью разделителя
int my_split(char *str, char delimiter, char **result, int max_tokens) {
    int count = 0;
    result[0] = str;
    for (int i = 0; str[i] != '\0' && count < max_tokens - 1; i++) {
        if (str[i] == delimiter) {
            str[i] = '\0'; 
            result[++count] = &str[i + 1]; 
        }
    }
    return count + 1; // Возвращаем количество найденных токенов (плюс один для последней подстроки)
}
