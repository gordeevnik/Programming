#include <stdio.h>
#include <string.h>

int main()
{

    char str1[16] = "Abc";
    char str2[16] = "Def";
    char test1[64] = "ABC";
    char test2[64] = "defghijklmnopqrstuvwxyz";
    char test3[16] = "Hello,world";
    char test4[16] = "Hell";
    char copy[64] = "";
    short int len;
    int result = 0;
    int n;

    /*Первое задание*/
    printf("\nСложение двух строк: %s\n", strcat(str1, str2));


    /*Второе задание */
    printf("\nВведите количество элементов из 2 строки:");
    scanf("%d", &n);
    printf("Сложение строк: %s\n", strncat(test1, test2, n));


    /*Третье задание*/
    result = strncmp(test1, test2, len);
    if (result > 0)
        printf("\nПервая строка  >  Второй строки");
    else if (result < 0)
        printf("\nВторая строка  >  Первой строки");
    else
        printf("\nСтроки равны");

    /*Четвертое задание*/
    printf("\nКоличество сравниваемых элеметов относительно начала строки:");

    scanf("%d", &n);

    if (strncmp(test3, test4, n) == 0)
        printf("\nЭти элементы одинаковые\n", n);

    else
        printf("\nЭти элементы разные\n", n);

    /*Пятое задание*/
    printf("\nКопирование строк: %s\n", strcpy(str1, copy));


    /*Шестое задание*/
    printf("Введите количество символов, которые нужно скопировать из одной строки в другую:");

    scanf("%d", &n);

    printf("Копирование символоув: %s\n", strncpy(test1, copy, n));

    //Задание 7//
    printf("Длина строки '%s'= %d\n", test3, strlen(test3));


    // Задание 9//
    int j;
    printf("Write symbol:");
    scanf("%c", &j);
    if (strrchr(a9, j)==NULL)
        printf("The symbol '%c' in '%s' is not Null", j, a9);
    else
        printf("The position '%c' in '%s'-%d", j, a9, (strrchr(a9, j)-a9+1));

    return 0;
}