#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    for (int i = 1 ; i <= n ; i++)
    {

        for (int j = i ; j < n ; j++)
        {
            printf(" ");
        }
        for (int k = 1 ; k <= i ; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int x = 0 ; x < n ; x++)
        {
            printf("");
        }
        for (int y = 0 ; y < i ; y++)
        {
            printf("#");
        }
        printf("\n");
    }
}
