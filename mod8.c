#include<stdio.h>
#include<stdlib.h>

int getRandomInteger(int smallestInteger, int largestInteger);
int fillArrayOfIntegers(int* array, int count, int smallestInteger, int largestInteger);
void writeTable(int*array, int length);
#define ARRAYSZ 150
int main() {
    int array[ARRAYSZ];
    fillArratOfIntegers(array, ARRAYSZ, -200, 200);
    writeTable(array, ARRAYSZ);
    return 0;
}

void writeTable(int* array, int length) {
    int i = 0;
    for(i = 0; i < length; ++i) {
        printf("%7d", array[i]);
        ++column;
        if (i% 10 == 0 || i != 0) {
            printf("\n");
            
        }
    }
}

int getRandomInteger(int smallestInteger, int largestInteger) {
    int rangeOfIntegers = 1 + largestInteger - smallestInteger;
    double normalizedRand = rand() / (RAND_MAX + 1.0);
    return (int) (normalizedRand * rangeOfIntegers + smallestIntegers);
}

int fillArrayOfIntegers(int* array, int count, int smallestInteger, int largestInteger);
{
    int i = 0;
    for (i = 0; i < count; i++)
    array[i] = getRandomInteger(smallestInteger, largestInteger);
    }
    return i;
}    
