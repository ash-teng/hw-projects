#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* use rand() to get a random double in given range */
double getRandomDouble(double lowerLimit, double upperLimit);
/* assign random doubles to array elements */
int fillArrayWithRandomValues(double *array, int arrayLength,
                            double lowerLimit, double upperLimit);

/* print the array values one above the other */
void listArrayValues(double* array, int arrayLength);
/* return the minimum value found in the array */
double getMinimumArrayValue(double* array, int arrayLength);
/* return the maximum value found in the array */
double getMaximumArrayValue(double* array, int arrayLength);
/* return the sum of the values in the array */
double getSumOfArrayValues(double* array, int arrayLength);
/* return the mean of the array, using sumOfArrayValues() to get the sum */
double getMeanOfArrayValues(double* array, int arrayLength);
/* return variance of the array, use meanOfArrayValues() to get the mean */
double getPopulationVariance(double* array, int arrayLength);
/* return standard deviation, using sqrt() and varianceOfArrayValues */
double getPopulationStandardDeviation(double* array, int arrayLength);

#define ARRAY_SIZE 100
#define DATA_LENGTH 75
int main(void) {
    double array[ARRAY_SIZE];
    int arrayLength = fillArrayWithRandomValues(array, DATA_LENGTH, 40.0, 60.0);
    listArrayValues(array, arrayLength);
    printf("The sum of the %d values was %.3f\n", arrayLength,
           getSumOfArrayValues(array,arrayLength));
    printf("The smallest was %.3f, and the largest was %.3f\n",
           getMinimumArrayValue(array, arrayLength), 
           getMaximumArrayValue(array, arrayLength));
    printf("The average of the values was %.3f\n", 
           getMeanOfArrayValues(array, arrayLength));
    printf("The population standard deviation was %.3f\n",
           getPopulationStandardDeviation(array, arrayLength));
    return 0;
}

/* %%% TODO: put your function implementations down here %%% */
double getRandomDouble(double lowerLimit, double upperLimit) {
    double rangeOfReals = upperLimit - lowerLimit;
    double normalizedRand = rand() / (RAND_MAX + 1.0);
    return (normalizedRand * rangeOfReals + lowerLimit);
}

int fillArrayWithRandomValues(double* array, int arrayLength,
                            double lowerLimit, double upperLimit) {
    int i = 0;
    for (i = 0; i < arrayLength; i++)
         array[i] = getRandomDouble(lowerLimit, upperLimit);
    return i;
}        


void listArrayValues(double* array, int arrayLength) {
    int i = 0;
    for(i = 0; i < arrayLength; ++i) 
        printf("number[%d] is %.3lf\n", i, array[i]);
}


double getMinimumArrayValue(double* array, int arrayLength) {

    double min = 0.0;
    int i = 0;
    for (i = 0; i < arrayLength; i++)
        if (array[i] < min || i == 0)
            min = array[i];
    return min;
}

double getMaximumArrayValue(double* array, int arrayLength) {
    double max = 0.0;
    int i = 0;
    for (i = 0; i < arrayLength; i++)
        if (array[i] > max || i == 0)
            max = array[i];
    return max;
}

double getSumOfArrayValues(double* array, int arrayLength) {
    double sum = 0.0;
    int i = 0;
    for (i = 0; i < arrayLength; i++)
        sum += array[i];
    return sum;
}

double getMeanOfArrayValues(double* array, int arrayLength) {
    double sum = getSumOfArrayValues(array, arrayLength);
    double mean = 0.0;
    mean = sum / arrayLength;
    return mean;
}
    
double getPopulationVariance(double* array, int arrayLength) {
    double mean = getMeanOfArrayValues(array, arrayLength);
    double variance = 0.0;
    double deviation = 0.0;
    int i = 0;
    for (i = 0; i < arrayLength; i++) {
        deviation = array[i] - mean; 
        variance+= deviation * deviation;
    }
    variance /= arrayLength;
    return variance;
}

double getPopulationStandardDeviation(double* array, int arrayLength) {
    double variance = getPopulationVariance(array, arrayLength);
    double standarddeviation = 0.0;
    standarddeviation = sqrt(variance);
    return standarddeviation;
}





    
        
            
        


