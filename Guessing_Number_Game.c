#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num, guess, attempts = 0;

    srand(time(0));
    num = rand() % 100 + 1;

    printf("Welcome to The Number guessing Game.\n");
    printf("I have chosen a Number Between 1 and 100. Can You Guess it???\n");

    do
    {
        printf("Enter Your Guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > num)
        {
            printf("Too High! Try Again.\n");
        }
        else if (guess > num)
        {
            printf("Too Low! Try Again.\n");
        }
        else
        {
            printf("Congratulations! You Guessed the Number %d attempts.\n", attempts);
        }
    } while (guess != num);

    return 0;
}