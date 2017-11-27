#include <stdio.h>
#include <cs50.h>
#include <math.h>

// program count the least possible amount of coins (1, 5, 10, 25c) to give a change

int main(void)
{
    float change;
    int coins = 0;

    do
    {
    printf("How much do I owe you?\n");
    change = get_float();
    }
    while (change < 0);

change = change * 100;
int cents = round(change);

while (cents >=25)
{
    coins++;
    cents = cents - 25;
}

while (cents >=10)
{
    coins++;
    cents = cents - 10;
}

while (cents >=5)
{
    coins++;
    cents = cents - 5;
}

while (cents >=1)
{
    coins++;
    cents = cents - 1;
}

    printf("%i\n", coins);

}