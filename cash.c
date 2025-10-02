#include <cs50.h>
#include <stdio.h>

void make_change(int working_amount);

int main(void)
{
    int change_owed;
    do
    {
        change_owed = get_int("Change owed: ");
    }
    while (change_owed < 1);

    // Make change
    make_change(change_owed);
}

void make_change(int change_owed)
{
    int coin_number = 0;
    const int q = 25;
    const int d = 10;
    const int n = 5;
    const int p = 1;

// Subtract out quarters
    while (change_owed >= q)
    {
        change_owed = change_owed - q;
        coin_number++;
    }

// Subtract out dimes
    while (change_owed >= d)
    {
        change_owed = change_owed - d;
        coin_number++;
    }

// Subtract out nickels
    while (change_owed >= n)
    {
        change_owed = change_owed - n;
        coin_number++;
    }

// Subtract out pennies
    while (change_owed >= p)
    {
        change_owed = change_owed - p;
        coin_number++;
    }

// Print number of coins as change
    printf("%i\n", coin_number);
}
