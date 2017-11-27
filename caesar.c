#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// basic cryptograghy

int main(int argc, string argv[])
{
    if (argc!=2)
    {
        printf("Error\n");
        return 1;
    }
    int k = atoi(argv[1]);
    if (k<0)
    {
        printf("Error\n");
        return 1;
    }

    k = k % 26;
    printf("plaintext: ");
    string p = get_string();
    printf("ciphertext: ");
    for (int i = 0, n = strlen(p); i<n; i++)
    {
        if (isalpha(p[i]))
            {
                if (isalpha(p[i]+k))
                {
                    printf("%c", p[i]+k);
                }
                else printf("%c", p[i]+k-26);
            }
        else printf("%c", p[i]);
    }
    printf("\n");
    return 0;
}