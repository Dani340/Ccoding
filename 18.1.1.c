#include<stdio.h>

int main()
{
    float R1=10, R2=20, R3=6, R4=9, Rserie, Rparalel, Rfinal;

    Rserie = R3 + R4;

    Rparalel = 1 / (1 / Rserie + 1 / R2);

    Rfinal = Rparalel + R1;

    printf("Rezistenta echivalenta este %f \n", Rfinal);

}
