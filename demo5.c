#include <stdio.h>

void justDoIt() {
    double temperature_in_celsius = 37.0;
    printf("Hello. My temperature is %.2lf\n", 
            temperature_in_celsius);
}

int doThis() 
{
    int value = 7;   
 printf("I am doing this.\n");
    return value;
}

int doThat() 
{
    int value = 8;  
 printf("I am doing that.\n");
    return value;
}

int main() 
{
    int result = 0;
    result = temperature_in_celsius;   
    printf("I am starting in main\n"); 
    result =  doThis();
    printf("The result is %d\n", result);
    justDoIt(37.2);
    JustDoIt(0)
    printf("The result is %d\n", doThis())
    printf("The sum of two results is %d\n", doThis() + doThat(4,15));
    return 0;
}
