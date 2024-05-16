#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

size_t my_strlen(char *string);
char *my_strcpy(char *to, char *from);
int is_lower_char(char a);
char to_lower_char(char a);
char to_upper_char(char a);
int my_strcmp(char *str, char *str2);
char *my_strchr(char *str, char ch);
char *my_strcat(char *str, char *str2);
int my_strtok(char *str, char symbol, char *result[]);
int my_suntok(char *str, char symbol, int count);
char *my_strstr(char *str, char *substr);
int is_symbol(char s1, const char *accept);
size_t my_strspn(char *s, const char *accept);
int my_atoi(const char* str);
int my_split(char *str, char delimiter, char **result, int max_tokens);
char* itoa(int num, char* str, int base);
int my_rem(char *str, char *text);
int is_palindrome(char *str);
void remove_spaces(char *str);
void trim_string(char *str);