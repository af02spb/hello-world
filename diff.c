#include <stdio.h>
#include <cs50.h>

// compares two lines and outputs differences

int main()
{
    string s1 = get_string();
    string s2 = get_string();
    int i1, i2;
    for (i2=0; s2[i2]!='\0'; i2++)
    {
        for (i1=0; s1[i1]!='\0'; i1++)
        {
            if (s1[i1]==s2[i2])
            {
                s1[i1]='\20';
            }
        }
    }
    printf("%s\n", s1);
}