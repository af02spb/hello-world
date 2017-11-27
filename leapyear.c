#include <stdio.h>
#include <cs50.h>

// checks leap years

int main()
{
    int year = get_int();
    if (!(year % 400))
    printf("%d високосный год\n", year);
    else if (!(year % 4))
    {
    if (year % 100 !=0)
        {
    printf("%d високосный год\n", year);
        }
    }
    printf("%d невисокосный год\n", year);
}
