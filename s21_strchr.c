#include "s21_string.h"
// #include <stdio.h>
// #include <string.h>

/*
* @brief Выполняет поиск первого вхождения символа c (беззнаковый тип) в строке, на которую указывает 
аргумент str.

* @Options:
 * @param str – указатель на строку, в которой будет осуществляться поиск.
 * @param c – код искомого символа.

* @Return:
Указатель на искомый символ, если он найден в строке str, иначе NULL.

* @Description:
Функция strchr ищет первое вхождения символа, код которого указан в аргументе ch, в строке, на которую 
указывает аргумент str
*/

// ниже функция для проверки (если тесты еще не написаны)
// int main () {
//     char str[] = "VERTER";
//     char str2[] = "VETE";
//     char *pch;
//     char *pch2;
//     pch = s21_strchr(str, 'R');
//     pch2 = s21_strchr(str2, 'R');
//     printf("%s\n", pch); // output: RTER
//     printf("%s", pch2); // output: null
// }

char *s21_strchr(const char *str, int c) {
    s21_size_t str_len = s21_strlen(str);
    char *pointer = s21_NULL;

    for (s21_size_t i = 0; i < str_len; i++) {
        if (str[i] == c) {
            pointer = ((char *)str) + i;
            break;
        }
    }
    return pointer;
}