#include <stdio.h>
#include <stdint.h>
#define COEF 8

int main(void)
{
    int option = (111260445 % 30) + 1; // 16

    char value[] = "Данные";

    int user_data, data_bytes;

    user_data = 0;
    data_bytes = 0;

    while (scanf("%u", &user_data) == 1 && user_data >= 0)
    {
        data_bytes = user_data / COEF;

        printf("Величина: %s\nБазовая (бит): %d\nСтаршая (байт): %d\nМладшая (бит): %d\nКоэффициент: %d\n", value, user_data, data_bytes, user_data, COEF);
    }

    return 0;
}