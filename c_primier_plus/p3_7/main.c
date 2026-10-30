

#include<stdio.h>

int main(void){

    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);

    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%Lf can be written %Le\n", dip, dip);

    /*
    32000.000000 can be written 3.200000e+04
    And it's 0x1.f4p+14 in hexadecimal, powers of 2 notation
    0.000053 can be written 5.320000e-05
    */

    return 0;
}

