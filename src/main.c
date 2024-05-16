// #include "include/my_string_lib.h"

// int main() {
//     char str1[] = "Hello, World!";
//     char str2[20];
//     char str3[] = "hello";
//     char str4[] = "Hello";
//     char str5[] = "foo bar baz";
//     char result[10][10];

//     printf("Length of \"%s\": %zu\n", str1, my_strlen(str1));

//     my_strcpy(str2, str1);
//     printf("Copied string: %s\n", str2);

//     printf("Is 'a' a lowercase character? %d\n", is_lower_char('a'));
//     printf("Is 'A' a lowercase character? %d\n", is_lower_char('A'));

//     printf("Convert 'A' to lowercase: %c\n", to_lower_char('A'));
//     printf("Convert 'b' to uppercase: %c\n", to_upper_char('b'));

//     printf("Comparison of \"%s\" and \"%s\": %d\n", str3, str4, my_strcmp(str3, str4));
//     printf("Comparison of \"%s\" and \"%s\": %d\n", str3, str4, my_strcmp2(str3, str4));

//     printf("First occurrence of 'o' in \"%s\": %s\n", str1, my_strchr(str1, 'o'));

//     printf("Concatenated string: %s\n", my_strcat(str1, str4));

//     int token_count = my_split(str5, ' ', result, 10);
//     printf("Tokens:\n");
//     for (int i = 0; i < token_count; i++) {
//         printf("%d: %s\n", i + 1, result[i]);
//     }

//     my_suntok(str5, ' ', token_count);
//     printf("String after tokenization: %s\n", str5);

//     printf("Substring 'bar' in \"%s\": %s\n", str5, my_strstr(str5, "bar"));

//     printf("Length of initial segment of \"%s\" containing only characters from \"%s\": %zu\n", str5, "abcdefghijklmnopqrstuvwxyz", my_strspn(str5, "abcdefghijklmnopqrstuvwxyz"));

//     // Демонстрация my_atoi
//     const char *str_num = "123";
//     int num = my_atoi(str_num);
//     printf("String to int conversion: %d\n", num);

//     // Демонстрация itoa
//     char str_int[20];
//     int num_to_str = 456;
//     itoa(num_to_str, str_int, 10);
//     printf("Int to string conversion: %s\n", str_int);

//     // Демонстрация my_rem
//     char str_rem[] = "some text imposter";
//     if (my_rem(str_rem, "some text ") == 0) {
//         printf("After removing substring: %s\n", str_rem);
//     } else {
//         printf("Substring not found\n");
//     }

//     // Демонстрация remove_spaces
//     char str_spaces[] = "Remove all spaces from this string";
//     printf("Before removing spaces: %s\n", str_spaces);
//     remove_spaces(str_spaces);
//     printf("After removing spaces: %s\n", str_spaces);

//     // Демонстрация is_palindrome
//     const char *palindrome_str = "racecar";
//     printf("\"%s\" is%s a palindrome\n", palindrome_str, is_palindrome(palindrome_str) ? "" : " not");

//     // Демонстрация trim_string
//     char str_to_trim[] = "     Trim this string     ";
//     printf("Before trimming: \"%s\"\n", str_to_trim);
//     trim_string(str_to_trim);
//     printf("After trimming: \"%s\"\n", str_to_trim);

//     return 0;
// }
