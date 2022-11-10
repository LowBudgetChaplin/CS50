

                        // NETERMINAT

// -------------------------------------------------------------------
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


bool only_digits(string s);
int main(int argc, string argv[])

{
    if (argc == 2 )
    {
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

bool only_digits(string s)
{
    s = get_string("plaintext: ");
    if (isdigit(s))
    {
        for(int i=0, n = strlen(s) ; i < n ; i++)
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}
