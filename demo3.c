#include <stdio.h>

/* demo of logical comparison operators*/
int main() {
    int value1 = 0;
    int value2 = 0;
    int status = 0;
    printf("Enter two integers:");
    status = scanf("%d %d",&value1, &value2);
    if (value1 >= value2){
    printf("%d is greater than %d.\n",value1, value2);
    } else {
     printf("%d is smaller than %d.\n", value1 ,value2);
    }
    return 0;
}
