#include <stdio.h>
#define min 1
#define max 100
int main()
{
    int First = 0;
    int check=0;

    printf("1)\tEnter the numeric:\t");
    scanf ("%d", &First);

    check=(min <= First) && (First <= max);

    printf ("Is it in range: %s\n",check ? "yes\n":"no\n");

    printf("2)\tEnter numeric:\t");
    scanf("%d",&First);
    First=First>>2;
    First=First&1;
    printf("Value of 2nd bit: %d",First);

    return 0;
}