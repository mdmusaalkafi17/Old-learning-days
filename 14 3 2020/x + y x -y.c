#include<stdio.h>

int main()
{
    double a1, a2, b1, b2, c1, c2,  x, y, d;

    scanf("%lf %lf %lf %lf %lf %lf",
          &a1, &a2, &b1, &b2, &c1, &c2);

    d = a1*b2 - a2*b1;

    if((int) d == 0)
    {
        printf("Impossible");
    }
    else
    {
        x = (b2*c1 - b1*c2) / d;
        y = (a1*c2 - a2*c1) / d;

        printf("%lf %lf", x, y);
    }

    return 0;
}


