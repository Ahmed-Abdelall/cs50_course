#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int height;
    do
    {
      height = get_int("Height: ");
    }
    while(height <= 0  ||  height > 8 );

    for (int row = 0 ; row < height ; row++)
    {
        for (int space =0 ;space < height -row -1 ; space++)
        {
              printf(" ");
        }
        for (int colum = 0 ; colum <= row ; colum++)
        {
              printf("#");
        }
        printf("\n");
    }


}