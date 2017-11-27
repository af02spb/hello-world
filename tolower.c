#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

// tolower

int main()
{
    char c = get_char();
    (islower(c)) ? printf("%c\n", c) : printf("%c\n", c+32);
}