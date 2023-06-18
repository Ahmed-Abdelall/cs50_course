#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string message = get_string("Messege: ");

    for (int i = 0; i < strlen(message); i++)
    {
        char byte = message[i];
        int binary[BITS_IN_BYTE];
        int lighte = byte ;
        int r ;

        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            r = lighte % 2 ;
            binary[j] = r ;
            lighte /= 2 ;

        }
        for (int k = BITS_IN_BYTE - 1; k >= 0 ; k--)
        {
            print_bulb(binary[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
