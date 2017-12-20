#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>


int main ()
{
    char* p = "p:l'ai2n2te{}xt";
    char* kw = "keyword";
    int np = strlen(p);
    int nk = strlen(kw);
    char ct[np];
    for (int i=0, i2=0; i<np; i++)
    {
        if (isalpha(p[i]))
        {
        ct[i] = (p[i]%96 + kw[i2%nk]%96)%26;
        if (ct[i] == 0)
        {
            ct[i] = ct[i] + 122;
        }
        else ct[i] = (p[i]%96 + kw[i2%nk]%96)%26 + 96;
        i2++;
        }
        else ct[i] = p[i];
    }
    printf("%s", ct);

    printf("\n");
}