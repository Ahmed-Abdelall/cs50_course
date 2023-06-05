#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get Name From User
    string name = get_string("What's your name? ");
    //Print Hello , User Name From In
    printf("hello, %s\n", name);
}