#include <stdio.h>

unsigned long long geom_sum(int base, int exp);

int main(void)
{
    int option = ((111260445 + (0 + 19)) % 30) + 1; // 5

    int range, n, a;

    n = 0;
    a = 0;

    unsigned long long result = 0;

    scanf("%d", &n);

    while (a < n)
    {
        a++;

        scanf("%d", &range);

        result = geom_sum(2, range);

        printf("geometric_sum: %llu\n\n", result);
    }

    return 0;
}

unsigned long long geom_sum(int base, int exp)
{
    unsigned long long result = 1;

    size_t i = 0;
    while (i < exp)
    {
        i++;
        result *= base;
    }

    return result - 1;
}