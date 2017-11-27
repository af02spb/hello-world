#include <stdio.h>

// this program converts Fahrenheit to Celcius

int main()
{
    printf("Таблица соответствия температур по Фаренгейту и Цельсию\nF\tC\n");
    float fahr, cel, max;
    max = 300;
    for (fahr = 0; fahr <= max;)
    {
        cel = (fahr-32)*5/9;
        printf("%3.0f\t%6.2f\n", fahr, cel);
        fahr = fahr + 20;
    }
}