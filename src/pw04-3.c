#include <stdio.h>

int main(void)
{
    int option = ((111260445 + (0 + 13)) % 30) + 1; // 29

    int range, result;

    range = 0;
    result = 0;

    scanf("%d", &range);

    size_t i = 1;

    while (range > 0)
    {
        i++;
        result = (i - 1) * 1000;
        printf("%d: %ld МДж - %d кДж\n", range, i-1, result);
        range--;
    }

    return 0;
}