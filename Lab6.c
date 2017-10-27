#include <stdlib.h>
#include <stdio.h>

#define SizeOfMassive 4

main()
{
    float Massive1[SizeOfMassive];
    float *pMass = &Massive1[0];
    int i, n;
    float *p;

    //First Task
    printf("\n1) Massive with 4 elements\n\n");
    *pMass = 56.4;
    *(pMass + 1) = 36.5;
    *(pMass + 2) = 7.7;
    *(pMass + 3) = 44.3;

    for (i = 0; i < SizeOfMassive; i++)
    {
        printf("%d.\t%.1f\n", i + 1, pMass[i]);
    }

    //Second Task
    printf("\n 2) Dynamic massive with N float elements");
    printf("\n Enter massive size: ");
    scanf("%d", &n);                                    //Entering number of Dynamic Massive elements

    p = (float *) malloc(n * sizeof(float));                //Using memory

    for (i = 0; i < n; i++)
    {
        printf("%d Massive element = ", i + 1);               //Fulling massive with float elements
        scanf("%f", &p[i]);
    }

    printf("\nYour massive:\n");

    for (i = 0; i < n; i++)                                   //Printing out Massive{
        printf("%d.\t%.2f\n", i + 1, p[i]);


    free(p);                                                //Cleaning RAM
}

