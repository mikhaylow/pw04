#include <stdio.h>

double c_to_k(double c);

int main(void)
{
    int option = ((111260445 + (0 + 23)) % 30) + 1; // 9

    double celcius, kelvin;

    while(scanf("%lf", &celcius) == 1)
    {
        kelvin = c_to_k(celcius);
        printf("celcius: %.2f\nkelvin: %.2f\n", celcius, kelvin);
    }

    return 0;
}

const double COEF = 273.15;

double c_to_k(double c)
{
    return c + COEF;
}