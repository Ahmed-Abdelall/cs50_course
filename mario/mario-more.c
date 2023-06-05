#include <cs50.h>
#include <stdio.h>


int main(void)
{

    int height;
    do
    {
        // Get Height From User ...
        height = get_int("Height: ");
    }
    while (height <= 0  ||  height > 8);

    // Main loop..
    for (int row = 0 ; row < height ; row++)
    {
        // space loop
        for (int space = 0 ; space < height - row - 1 ; space++)
        {
            printf(" ");
        }
        // hash loop
        for (int colum = 0 ; colum <= row ; colum++)
        {
            printf("#");
        }
        // Jap Between Colums ...
        printf("  ");

        // The next pyramids ...
        for (int c = 0 ; c <= row ; c++)
        {
             printf("#");
        }
        // New Line 
        printf("\n");
    }


}
