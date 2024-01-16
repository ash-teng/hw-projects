#include <stdio.h>
#include <stdlib.h>

int main() {
int getRandomInteger(int smallestInteger, int largestInteger) {
int rangeOfIntegers = 1 + largestInteger – smallestInteger;
double normalizedRand = rand() / (RAND_MAX + 1.0);
return (int)(normalizedRand * rangeOfIntegers + smallestInteger);
}


int main() {

