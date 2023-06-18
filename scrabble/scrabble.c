#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}

int compute_score(string word)
{
    char alphabet[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W',
    'X','Y','Z'};
    int count = 0 ;

    // TODO: Compute and return score for string
    for (int i = 0 ; i < strlen(word); i++)
    {
       word[i] = toupper(word[i]);
       if (word[i] > 65 &&  word[i] < 90)
       {
        count += POINTS[word[i] - 65];
       }



        // if(word[i] == alphabet[i])
        // {
        //     count += POINTS[i];
        // }
        // else if(word[i] == alphabet[i+1])
        // {
        //     count += POINTS[i+1];
        // }
        // else if(word[i] == alphabet[i+2])
        // {
        //     count += POINTS[i+2];
        // }
        // else if(word[i] == alphabet[i+3])
        // {
        //     count += POINTS[i+3];
        // }
        // else if(word[i] == alphabet[i+4])
        // {
        //     count += POINTS[i+4];
        // }
        // else if(word[i] == alphabet[i+5])
        // {
        //     count += POINTS[i+5];
        // }
        // else if(word[i] == alphabet[i+6])
        // {
        //     count += POINTS[i+6];
        // }
        // else if(word[i] == alphabet[i+7])
        // {
        //     count += POINTS[i+7];
        // }
        // else if(word[i] == alphabet[i+8])
        // {
        //     count += POINTS[i+8];
        // }
        // else if(word[i] == alphabet[i+9])
        // {
        //     count += POINTS[i+9];
        // }
        // else if(word[i] == alphabet[i+10])
        // {
        //     count += POINTS[i+10];
        // }
        // else if(word[i] == alphabet[i+11])
        // {
        //     count += POINTS[i+11];
        // }
        // else if(word[i] == alphabet[i+12])
        // {
        //     count += POINTS[i+12];
        // }
        // else if(word[i] == alphabet[i+13])
        // {
        //     count += POINTS[i+13];
        // }
        // else if(word[i] == alphabet[i+14])
        // {
        //     count += POINTS[i+14];
        // }
        // else if(word[i] == alphabet[i+15])
        // {
        //     count += POINTS[i+15];
        // }
        // else if(word[i] == alphabet[i+16])
        // {
        //     count += POINTS[i+16];
        // }
        // else if(word[i] == alphabet[i+17])
        // {
        //     count += POINTS[i+17];
        // }
        // else if(word[i] == alphabet[i+18])
        // {
        //     count += POINTS[i+18];
        // }
        // else if(word[i] == alphabet[i+19])
        // {
        //     count += POINTS[i+19];
        // }
        // else if(word[i] == alphabet[i+20])
        // {
        //     count += POINTS[i+20];
        // }
        // else if(word[i] == alphabet[i+21])
        // {
        //     count += POINTS[i+21];
        // }
        // else if(word[i] == alphabet[i+22])
        // {
        //     count += POINTS[i+22];
        // }
        // else if(word[i] == alphabet[i+23])
        // {
        //     count += POINTS[i+23];
        // }
        // else if(word[i] == alphabet[i+24])
        // {
        //     count += POINTS[i+24];
        // }
        // else if(word[i] == alphabet[i+25])
        // {
        //     count += POINTS[i+25];
        // }
        // else if (!isalpha(word[i]))
        // {
        //     count += 0;
        // }

    }

    return count;
    

}
