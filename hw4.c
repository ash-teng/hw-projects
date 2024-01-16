#include <stdio.h>
#include <stdlib.h>


int getRandomInteger(int smallestInteger, int largestInteger)
{
    int rangeOfIntegers = 1 + largestInteger - smallestInteger;
    double normalizedRand = rand() / (RAND_MAX + 1.0);
    return (int) (normalizedRand * rangeOfIntegers + smallestInteger);
}

void printImage(int n)
{
    if (n == 1)
        printf("|   bell   ");
    else if (n == 2)
        printf("| cherries ");
    else if (n == 3)
        printf("|  seven   ");
    else 
        printf("Error");
}

void printLosingGame(int wheel1, int wheel2, int wheel3)
{
    printImage(wheel1);
    printImage(wheel2);
    printImage(wheel3);
    printf("|\n ---------- ---------- ----------");
}

void printWinningGame(int wheel1, int wheel2, int wheel3)
{
    printImage(wheel1);
    printImage(wheel2);
    printImage(wheel3);
    printf("| YOU WIN!\n ---------- ---------- ----------");
}


void playGame()
{
    int wheel1 = getRandomInteger(1, 3);
    int wheel2 = getRandomInteger(1, 3);
    int wheel3 = getRandomInteger(1, 3);
    if (wheel1 == wheel2 && wheel2 == wheel3)
        printWinningGame(wheel1, wheel2, wheel3);
    else
        printLosingGame(wheel1, wheel2, wheel3);
}

int main()
{
    printf("hit enter to play or play again, else q to quit");
    char c;
    scanf("%c", &c);
    while (c == '\n') {
        playGame();
        scanf("%c", &c);
    }
    printf("\n");
    return 0;
}
