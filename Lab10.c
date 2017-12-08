#include <stdio.h>

int sumDigits(int number)
{
    if (number < 10)
    {
        return number;
    } else
    {
        return number % 10 + sumDigits(number / 10);
    }
}

int gcd(int a, int b)
{
    int c;

    while (a)
    {
        c = a;
        a = b % a;
        b = c;
    }

    return b;
}

int lcm(int a, int b)
{
    return a * (b / gcd(a, b));
}


int main()
{
    // Задание 1
    int firstNumber, secondNumber;

    printf("Введите первое число: ");
    scanf("%d", &firstNumber);

    printf("Введите второе число: ");
    scanf("%d", &secondNumber);

    printf("\nНаибольший общий делитель: %d", gcd(firstNumber, secondNumber));
    printf("\nНаименьшее общее кратное: %d\n\n", lcm(firstNumber, secondNumber));

    // Задание 2

    int number;
    printf("Введите число, для которого нужно посчитать сумму цифр: ");
    scanf("%d", &number);

    printf("\nСумма цифр: %d", sumDigits(number));

    return 0;
}