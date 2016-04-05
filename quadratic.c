#include <stdio.h>
#include <math.h>

int quadratic_equation (int a, int b, int c)
{
    int  d, x1 = 0, x2 = 0;

    if (a == 0) printf("\a\n the equation has no roots ");
    else
    {
        d = pow(b, 2) - 4 * a * c;
	printf ("D = %d\n",d);
        if (d < 0) printf("\a\n The equation has no real roots !");
}
