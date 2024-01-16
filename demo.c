#include <stdio.h>
int  main() {
    int userInput = 475;
    int count = 0;
    int sum = 0;
    int numberOfPositives = 0;
    int numberOfNegatives = 0;
    printf("Enter an integer (or q to quit): ");
    while (scanf("%d", &userInput) > 0) { 
        count++;
        sum += userInput; 
        if (userInput > 0)
            numberOfPositives++;
        if (userInput < 0)
            numberOfNegatives++;
        printf("Enter an integer (or q to quit): ");
    }
    printf("You entered %d integers.\n",count);
    printf("%d of the integers are positive.\n", numberOfPositives);
    printf("%d of the integers are negative.\n", numberOfNegatives);
    printf("The sum of %d numbers is %d\n.", count, sum);
    return 0;
}
