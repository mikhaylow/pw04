#include <stdio.h>
#include <stdbool.h>

double c_to_k(double c);

int main(void)
{

    int option = ((111260445 + (0 + 23)) % 30) + 1; // 9

    double celcius, kelvin;

    while(true)
    {
        if (scanf("%lf", &celcius) != 1) return -1;
        kelvin = c_to_k(celcius);
        printf("celcius: %.2f\nkelvin: %.2f\n", celcius, kelvin);
    }

    return 0;
}

double c_to_k(double c)
{
    const double COEF = 273.15;

    return c + COEF;
}