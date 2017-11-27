#include <stdio.h>

// this program converts Celcius to Fahrenheit

int main()
{
    printf("Таблица соответствия температур по Цельсию и Фаренгейту\nC\tF\n");
    float cel, fahr, max;
    max = 60;
    for (cel = -90; cel <= max;)
    {
        fahr = cel*9/5+32;
        printf("%3.0f\t%4.0f\n", cel, fahr);
        cel = cel + 10;
    }
}