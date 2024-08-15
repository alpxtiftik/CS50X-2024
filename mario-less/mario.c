#include <stdio.h>
#include <cs50.h>


int main()
{
    int height;
    do
        height = get_int("Height: ");
    while (height<=0 || height>=9);

    for (int x = 1; x<=height; x++)
    {
        for(int y=height-1; y>=x; y--)
        {
            printf(" ");
        }

        for (int z = 1; z<=x; z++)
        {
            printf("#");
        }

        printf("\n");
    }
}
