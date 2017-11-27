#include <stdio.h>
#include <cs50.h>

// this program build a right-sided pyramid of user declared height

int main(void)
{
int h;
int r;
int s;
int hs;

do
{
    printf("Height: ");
    h = get_int();
}
while (h < 0 || h > 23);

for (r = 1; r <= h; r++)
{
    for (s = (h - r); s > 0; s--)
    {
        printf(" ");
    }
    for (hs = 1; hs <= (r + 1); hs++)
    {
        printf("#");
    }
    printf("\n");
}
}