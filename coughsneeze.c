#include <stdio.h>

// this program was meant to learn how to create and use one's own functions

void cough(void);
void sneeze(void);

int main(void)
{
    for (int n=0; n<3; n++)
        cough();
    for (int i=0; i<2; i++)
        sneeze();
}

void cough(void)
{
    printf("cough\n");
}

void sneeze(void)
{
    printf("sneeze\n");
}