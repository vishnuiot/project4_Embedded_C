#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
func(double, double);

int main()
{
    double result;
    result = func(45, 43);
    printf("The result is %f \n", result);
    return 0;
}
func(double x, double y)
{
    double ergebnis;
    ergebnis = x + y;
    return ergebnis;
}