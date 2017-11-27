#include <stdio.h>
#include <cs50.h>

// just replaces inputs with the same amount of _

int main()
{
    string s = get_string();
    int i;
    for (i = 0; s[i]!='\0'; i++)
    {
        printf("_");
    }
    printf("\n");
    return 0;
}