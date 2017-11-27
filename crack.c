#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// basic password cracking

int main(int argc, string argv[])
{
    char l1, l2, l3, l4;
    string hash = argv[1];
    string myhash;
    if (argc!=2)
    {
        printf("Error\n");
        return 1;
    }
    else

    for (l1 = 'A'; l1<='z'; l1++)
    {
        char mypass1[2];
        mypass1[0] = l1;
        mypass1[1] = '\0';
        myhash = crypt(mypass1,"50");
        if (strcmp(hash, myhash) == 0)
            {
                printf("%s\n", mypass1);
                return 0;
            }
        for (l2 = 'A'; l2<='z'; l2++)
        {
            char mypass2[3];
            mypass2[0] = l1;
            mypass2[1] = l2;
            mypass2[2] = '\0';
            myhash = crypt(mypass2,"50");
            if (strcmp(hash, myhash) == 0)
            {
                printf("%s\n", mypass2);
                return 0;
            }
            for (l3 = 'A'; l3<='z'; l3++)
            {
                char mypass3[4];
                mypass3[0] = l1;
                mypass3[1] = l2;
                mypass3[2] = l3;
                mypass3[3] = '\0';
                myhash = crypt(mypass3,"50");
                if (strcmp(hash, myhash) == 0)
                {
                    printf("%s\n", mypass3);
                    return 0;
                }
                for (l4 = 'A'; l4<='z'; l4++)
                {
                    char mypass4[5];
                    mypass4[0] = l1;
                    mypass4[1] = l2;
                    mypass4[2] = l3;
                    mypass4[3] = l4;
                    mypass4[4] = '\0';
                    myhash = crypt(mypass4,"50");
                    if (strcmp(hash, myhash) == 0)
                    {
                        printf("%s\n", mypass4);
                        return 0;
                    }
                }

            }
        }
    }
        printf("Not broken ((\n");
        return 1;
}