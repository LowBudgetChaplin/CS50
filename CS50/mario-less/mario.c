#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;

    do{
    h=get_int("Height: ");
    } while (h<1 || h>8);

    for(int i=1;i<=h;i++){

        for(int j=i;j<h;j++){
        printf(" ");
        }

            for(int k=1;k<=i;k++)
            {
                printf("#");
            }

        printf("\n");
    }
}