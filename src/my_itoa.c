#include "../include/my_string_lib.h"

// Функция для конвертации целого числа в строку
char* itoa(int num, char* str, int base) {
    int i = 0;
    int is_negative = 0;

    // Обработка отрицательных чисел для оснований отличных от 10
    if (num < 0 && base != 10) {
        num = -num;
        is_negative = 1;
    }

    // Обработка отрицательных чисел для основания 10
    if (num < 0 && base == 10) {
        is_negative = 1;
        num = -num;
    }

    // Конвертация числа в строку обратно (начиная справа)
    while (num != 0) {
        int rem = num % base;
        str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
        num = num / base;
    }

    // Добавление знака минус, если число отрицательное и основание 10
    if (is_negative && base == 10) {
        str[i++] = '-';
    }

    str[i] = '\0';

    // Реверс строки
    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    return str;
}