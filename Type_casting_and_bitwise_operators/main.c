#include <stdio.h>
#include "quadraticroots.h"
#include <math.h>

int main()
{
    QuadraticRootsResult resultint, resultfloat, resultdouble;
    int a = 1, b = -5, c = 4;

    resultint = findroots((double)a, (double)b, (double)c);
    //if(resultint.norealroots == 0) 
    printf("Roots from integers: x1 = %.2lf, x2 = %.2lf\n", resultint.x1, resultint.x2);
    //else printf("No real roots\n");


    float a1 = 1.00, b1 = -7.00, c1 = 6.00;

    resultfloat = findroots((double)a1, (double)b1, (double)c1);
    //if(resultfloat.norealroots == 0) 
    printf("Roots from floats: x1 = %.2lf, x2 = %.2lf\n", resultfloat.x1, resultfloat.x2);
    //else printf("No real roots\n");


    double a2 = 1.00, b2 = 7.00, c2 = 12.00;

    resultdouble = findroots(a2, b2, c2);
    //if(resultdouble.norealroots == 0) 
    printf("Roots from doubles: x1 = %.2lf, x2 = %.2lf\n", resultdouble.x1, resultdouble.x2);
    //else printf("No real roots\n");


    return 0;
}