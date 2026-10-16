#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int option = ((111260445 + (0 + 7)) % 30) + 1; // 23

    uint16_t r = 0;
    
    if (scanf("%hu", &r) != 1) return -1;

    double result = 2 * 3.14159 * (double)r;

    printf("result: %f\nsize uint16_t: %llu\ndouble: %llu\n", result, (unsigned long long)sizeof(r), (unsigned long long)sizeof(result));

    return 0;
}