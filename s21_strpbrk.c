#include "s21_string.h"
// #include <stdio.h>

/*
* @brief s21_strpbrk - Находит первый символ в строке str1, который соответствует 
любому символу, указанному в str2.

* @Options:
 * @param str1 – указатель на строку, в которой ведется поиск.
 * @param str2 – указатель на строку с набором искомых символов.

* @Return:
NULL – если не один символ из троки str2 не найден в строке str1.
Указатель на первый найденный в строке str1 символ из множества символов строки str2.

* @Description:
Функция strpbrk ищет первое вхождение в строку, на которую указывает аргумент str1, 
одного из символов, входящих в строку, на которую указывает аргумент str2.
*/

char *s21_strpbrk(const char *str1, const char *str2) {
    char *res = s21_NULL;
    s21_size_t i = 0;
    for (i = 0 ; i < s21_strlen(str1); i++) {
        if (s21_strchr(str2,str1[i])) {
            res = (char*)&str1[i];
            break;
        }
    }
    return res;
}

// ниже функция для проверки (если тесты еще не написаны)
// int main () {
//     char str1[] = "Welcome QWERTY";
//     char str2[] = "Q";
//     char *print = 0;
//     print = s21_strpbrk(str1, str2);
//     printf("итог: %s\n", print);
// }