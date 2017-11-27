#include <stdio.h>
#include <string.h>
#include <cs50.h>

// this program requests a string from user, then counts the amount of spaces, tabs and new lines in that string

int main()
{
    string s = get_string("Enter string: ");
    int spaces, tabs, newlines, i;
    spaces = tabs = newlines = 0;
    for (i=0; i<10; i++)
    {
        if (s[i] == ' ')
        {
            spaces++;
        }
        else if (s[i] == '\t')
        {
            tabs++;
        }
        else if (s[i] == '\n')
        {
            newlines++;
        }
    }
    printf("%i, %i, %i\n", spaces, tabs, newlines);
}