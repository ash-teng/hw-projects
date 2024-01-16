#include <stdio.h>

int fill_array(int* , int, int);
void printArray(int* array, int array_length);
int getMaxInArray(int* array, int array_length);
int getSumOfArray(int array[], int array_length);
int getMeanOfArray(int array[], int array_length);

#define ARRAYSZ 32
int main() {
    int array[ARRAYSZ] = {-5,-17,-4,-12,-8,-16,-3,-2,-17,-6};
    int array_length = 10;
    printArray(array, array_length);
    printf("Max is %d\n", getMaxInArray(array, array_length));
    printf("Sum is %d\n", getSumOfArray(array, array_length));
    return 0;
} 

int getSumOfArray (int array[], int array_lenght);


