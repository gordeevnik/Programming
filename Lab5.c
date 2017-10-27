#include <stdio.h>

#define ex1 6                       //Количество элементов массива
#define Matrix_Size 2   //<--- Можно изменить размер квадратной матрицы !!!
#define size 7                      //Размер массива


int main()
{
    int z1[size];                       //Инициализация массива для 1 задания
    int z2[Matrix_Size][Matrix_Size];   //Инициализация массивов для 2 задания
    int z3[Matrix_Size][Matrix_Size];
    int Matrix_composition[Matrix_Size][Matrix_Size];
    int i, j, k;

//Задание 1
    printf("1)");
    for (i = 0; i <= ex1; i++)
    {
        z1[i] = z1[i - 1] + 10;
        printf("%i  ", z1[i]);
    }
    printf("\n");

//Задание 2
    //Ввод первой матрицы
    printf("\n2) Enter matrix %ix%i\n", Matrix_Size, Matrix_Size);
    for (i = 0; i < Matrix_Size; i++)
    {
        printf("Elements of %i-line: ", i + 1);
        for (j = 0; j < Matrix_Size; j++)
        {
            scanf("%i", &z2[i][j]);
        }
    }
    printf("\n First Matrix:\n");

    // Вывод первой матрицы
    for (i = 0; i < Matrix_Size; i++)
    {
        for (j = 0; j < Matrix_Size; j++)
        {
            printf("%i ", z2[i][j]);
        }
        printf("\n");
    }

    //Ввод второй матрицы
    printf("\n2) Enter matrix %ix%i\n", Matrix_Size, Matrix_Size);
    for (i = 0; i < Matrix_Size; i++)
    {
        printf("Elements of %i-line: ", i + 1);
        for (j = 0; j < Matrix_Size; j++)
        {
            scanf("%i", &z3[i][j]);
        }
    }
    printf("\n Second Matrix:\n");

    // Вывод второй матрицы
    for (i = 0; i < Matrix_Size; i++)
    {
        for (j = 0; j < Matrix_Size; j++)
        {
            printf("%i ", z3[i][j]);
        }
        printf("\n");
    }

    //Вычисление произведения матриц
    for (i = 0; i < Matrix_Size; i++)         //Обнуление итоговой матрицы
    {
        for (j = 0; j < Matrix_Size; j++)
        {
            Matrix_composition[i][j] = 0;
        }
    }


    for (int i = 0; i < Matrix_Size; i++)
    {
        for (int j = 0; j < Matrix_Size; j++)
        {
            for (int k = 0; k < Matrix_Size; k++)
            {
                Matrix_composition[i][j] += z2[i][k] * z3[k][j];
            }
        }
    }

    printf("\n Result matrix: \n");

    for (i = 0; i < Matrix_Size; i++)
    {
        for (j = 0; j < Matrix_Size; j++)
        {
            printf("%i ", Matrix_composition[i][j]);
        }
        printf("\n");
    }
    return 0;
}