/*16. Write a program to develop a very simple version of the "guess the magic number" game. The
program generates a random magic number between 1 and 1000. Ask user to guess the
number. If guess is correct then print message "congrats! You won." if the guess is less than
magic number print the message ** left ** otherwise print the message ** right **. Repeat the
procedure till player give accurate guess. Give maximum 10 chances to user.
Note: generates the magic number using the standard random number generator rand(), which
returns an arbitrary number between 0 and RAND_MAX (which defines an integer value that
is 32,767 or larger). The rand( ) function requires the header <stdlib.h>.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i;
    int min = 1, max = 1000;
    int r;

    srand(time(0)); // Seed random number generator
    r = rand() % (max - min + 1) + min; // Random number between 1 and 1000

    printf("------ Welcome to Guess the Magic Number Game ------\n");

    for(i = 1; i <= 10; i++)
    {
        printf("\nAttempt %d of 10\n", i);
        printf("Enter your guess: ");
        scanf("%d", &n);

        if(n == r)
        {
            printf("\n🎉 Congrats! You won! 🎊\n");
            break;
        }
        else if(n > r)
        {
            printf("Too high! Go ** left **\n");
        }
        else
        {
            printf("Too low! Go ** right **\n");
        }

        if(i == 10)
        {
            printf("\n😢 Sorry! You've used all 10 attempts.\n");
            printf("The magic number was: %d\n", r);
        }
    }

    return 0;
}
