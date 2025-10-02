#include <cs50.h>
#include <stdio.h>

void print_bricks(int count);
void print_spaces(int count);

int height;

int main(void)
{
    // prompt for height
    do
    {
        height = get_int("What is the height of the pyramid? (1-15 steps) ");
    }
    while (height < 1 || height > 15);

    // print rows
    for (int x=1; x <= height; x++)
    {
        print_spaces(x);
        print_bricks(x);
    }
}

void print_bricks(int count)
{
    for (int z = 0; z < count; z++)
    {
        printf("#");
    }
    printf("\n");
}

void print_spaces(int count)
{
    for (int y = height - count; y > 0; y--)
    {
        printf(" ");
    }
}
