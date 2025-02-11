#include "quadraticroots.h"
#include <math.h>

QuadraticRootsResult findroots(double a, double b, double c)
{
    double discriminant = (b * b) - (4 * a * c);

    QuadraticRootsResult result;
    
    if(discriminant > 0) 
    {
        result.x1 = (-b - sqrt(discriminant)) / (2 * a);
        result.x2 = (-b + sqrt(discriminant)) / (2 * a);
        return result;
    }
    else if(discriminant == 0)
    {
        result.x1 = result.x2 = -b / (2 * a);
        return result;
    }
    else 
    {
        result.norealroots = 1;
    }
}