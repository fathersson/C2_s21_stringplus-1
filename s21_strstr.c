#include "s21_string.h"
// #include <stdio.h> 
// #include <string.h>

/*
* @brief s21_strstr - Находит первое вхождение всей строки needle (не включая завершающий нулевой символ), 
которая появляется в строке haystack.

* @Options:
 * @param haystack - указатель на строку, в которой ведется поиск.
 * @param needle - указатель на искомую строку.

* @Return:
NULL - если строка needle не входит в строку haystack. 
Указатель на первое вхождение строки needle в строку haystack .

* @Description:
Функция strstr ищет первое вхождение строки (за исключением признака конца строки), на которую 
указывает аргумент needle, в строку , на которую указывает аргумент haystack. Если строка needle имеет 
нулевую длину, то функция вернет указатель на начало строки haystack.

h - указывает на адрес сохраненной переменной/позицию в строке 
*h - содержит значение текущего символа в строке
*/

char *s21_strstr(const char *haystack, const char *needle) {
    const char *h = haystack;
    const char *n = needle;

    while (h < haystack + s21_strlen(haystack)) {
        if (*h == *n && s21_memcmp(h, n, s21_strlen(n)) == 0) {
            h = (char *)h;
            break;
        }
        h++;
        if (*h == '\0') {
            h = s21_NULL;
            break;
        }
    }
    return (char *)h;
}

// ниже функция для проверки (если тесты еще не написаны)
// int main () {
//     char *str1 = "Hello, i am Roman!";
//     char *str2 = "am";
//     char *print = s21_NULL;
//     print = s21_strstr(str1, str2);
//     printf("итог: %s\n", print);
// }