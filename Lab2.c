#include <stdio.h>
#include <math.h>

int main() {
    double z1,z2,alpha;
    printf("Vvedite ugol Alpha v gradusah \n");
    scanf("%lf",&alpha);
    alpha=(alpha * M_PI)/180;
    z1=cos(alpha)+cos(2*alpha)+cos(6*alpha)+cos(7*alpha);
    printf("Result of first function = %f\n",z1);
    z2=(4*cos(0.5*alpha))*((cos(5/2*alpha)))*(cos(4*alpha));
    printf("Result of second function =%f",z2);

    return 0;
}