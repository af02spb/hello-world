#include <stdio.h>
#include <cs50.h>
#include <string.h>

// reverts the input

int main()
{
    string s = get_string();
    int n = strlen(s);
    int i = n-1;
    while (i>=0)
    {
        printf("%c", s[i]);
        i--;
    }
    printf("\n");
    return 0;
}