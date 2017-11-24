#define LIMIT 499
#include <stdio.h>

enum Numbers
{
    Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine
};


void PrintNum(int NumNum)
{
        switch (NumNum)
        {
                case Zero:
                        printf("Ноль %d", Zero);
                break;
                case One:
                        printf("Один%d", One);
                break;
                case Two:
                        printf("Два %d", Two);
                break;
                case Three:
                        printf("Три %d", Three);
                break;
                case Four:
                        printf("Четыре %d", Four);
                break;
                case Five:
                        printf("Пять %d", Five);
                break;
                case Six:
                        printf("Шесть %d", Six);
                break;
                case Seven:
                        printf("Семь %d", Seven);
                break;
                case Eight:
                        printf("Восемь %d", Eight);
                break;
                case Nine:
                        printf("Девять %d", Nine);
                break;
                default:
                        printf("Неверная цифра");
                break;
        }
}


int main()
{
        int Value;
        int Value2;
        int Duration;
        int Total;

printf("\nЗадание 2\n");
        printf("Введите величину абонентской платы:");
        scanf("%d",&Value);
        printf("Введите стоимость платы за минуту сверх лимита: ");
        scanf("%d",&Value2);
        printf("Введите продолжительность разговоров: ");
        scanf("%d",&Duration);


        if(Duration>LIMIT) Total = (LIMIT*Value+(Duration-LIMIT)*Value2);
        else Total = Duration*Value;
        printf("Стоимость месячного обслуживания:%d \n",Total);

printf("\nЗадание 3\n");

        short int NumNum;
        printf("Введите цифру: ");
        scanf("%d", &NumNum);
        PrintNum(NumNum);


    return 0;
}
