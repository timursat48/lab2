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
	else if (d == 0)
        {
            x1 = -b / (2 / a);
            if (b == 0 && c == 0) x1 = 0;
            printf(" The equation has one root: x = %d", x1);
        }
        else
        {
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);
            printf (" The equation has two root: \n x1 = %d\n x2 = %d" , x1, x2);
        }
    }

}

int main ()
{

    int  a, b, c;
    printf("Input a: ");
    scanf("%d", &a);
    printf ("Input b: ");
    scanf("%d", &b);
    printf("Input c: ");
    scanf("%d", &c);
    quadratic_equation (a, b, c);

    getchar();
    getchar();
    return 0;
}
