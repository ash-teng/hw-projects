#include <stdio.h>

int isFactor(int factor, int number) {
    if (number % factor == 0)
        return 1;
    else
        return 0;
}

int isPrime(int number) {
    int factor = 2;
    while (factor < number) {
        if (isFactor(factor, number))
        return 0;
        ++factor;
        }
        return 1;
}

void printPrimes(int numberOfPrimes) {
    int number = 1;
    printf("Printing %d primes\n", numberOfPrimes);
    while (numberOfPrimes > 0) {
        if (isPrime(number)) {
            printf("%d\n", number);
            --numberOfPrimes;
        }
                ++number;
    }
}

int main() {
    printPrimes(1000);
    return 0;
}
