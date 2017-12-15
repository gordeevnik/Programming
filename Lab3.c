#include <stdio.h>


    int main()
    {
        int First,Second;

        printf("1) Enter first number in 16cc: ");
        scanf("%x",&First);

        printf("2) You have entered (10cc): %d\n",First);

        printf("3.1) This number in 16cc: %x\n",First);
        printf("3.2) This number with bit move for 2 symbols: %x\n",First>>2);

        printf("4.1) This number in 16cc: %x\n",First);
        printf("4.2) This number with inversion: %x\n",~First);

        printf("5.1) Enter int number in 16cc: ");
        scanf("%x",&Second);
        printf("5.2) Result of bit conjunction : %x \n", First|Second);

        return 0;

    }
