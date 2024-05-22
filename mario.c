#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    // prompt user for height of pyramid
    int n;
    do
    {
        n = get_int("Height: ");
    }
    // use loop to reprompt as long as n<1 meaning where n is not a +ve integer
    while (n < 1 || n > 8);

    // print pyramid of height = h given by integer
    //  for (initialization; condition; update - repeat the code) i++ increment i by 1
    for (int i = 0; i < n; i++)
    {
        print_row(n - i - 1, i + 1);
    }
}

void print_row(int spaces, int bricks)
{
    // spaces are (n-1)\n j is loop counter for spaces
    for (int j = 0; j < spaces; j++)
    {
        printf(" ");
    }

    // for integer i = 0, where integer counter is < bricks, increment the counter i by 1
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    printf("\n");
}
