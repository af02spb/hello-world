#include <stdio.h>
#include <cs50.h>

// this program counts how many bottles of water one spends during certain minutes of shower

int main(void)
{
    int n;
    do
{
    n = get_int("Minutes: ");
}
while (n < 0);
    int b = n * 12;
    printf("Bottles: %i\n", b);

}