#include "s21_string.h"
// #include <stdio.h>

/*
* @brief s21_strrchr -  Выполняет поиск последнего вхождения символа c (беззнаковый тип) в строке, 
на которую указывает аргумент str.

* @Options:
 * @param str1 – указатель на строку, в которой будет осуществляться поиск.
 * @param c – код искомого символа.

* @Return:
Указатель на искомый символ, если он найден в строке str, иначе NULL.

* @Description:
Функция strchr ищет последнее вхождения символа, код которого указан в аргументе ch, в строке, на 
которую указывает аргумент str.
*/

char *s21_strrchr(const char *str1, const char c) {
    char *res = s21_NULL;
    for (int i = s21_strlen(str1) - 1; i > -1; i --) {
        if (s21_strchr(&c, str1[i])) {
            res = (char*)&str1[i];
            break;
        }
    }
    return res;
}

// ниже функция для проверки (если тесты еще не написаны)
// int main () {
//     char str1[] = "Hello, i am Roman";
//     char c = 'R';
//     char *print = s21_NULL;
//     print = s21_strrchr(str1, c);
//     printf("итог: %s\n", print);
// }