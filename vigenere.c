#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

/*
This program encrypts user input with vigenere code, using argument in command line as a keyword.
I had problems with writing it, so I used the rubber duck method:
Ok, rubber duck, so what should I do to make this work?
1. Check there are exactly two arguments in command line - DONE
2. Take plaintext as user input - DONE
3. Change each letter of the plaintext by the respective number of the keyword (avoiding non-alphabetical symbols in process)
4. Output ciphertext
*/

int main (int argc, char* argv[])
{
// 1. Check there are exactly two arguments in command line - DONE
    if (argc!=2)
    {
        printf("Wrong number of arguments\n");
        return 1;
    }

// 2. Take plaintext as user input - DONE
    char* p = get_string("Give me plaintext: ");

// 3. Change each letter of the plaintext by the respective number of the keyword (avoiding non-alphabetical symbols in process)

    char* kw = argv[1];
    int nk = strlen(kw);
    int np = strlen(p);
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