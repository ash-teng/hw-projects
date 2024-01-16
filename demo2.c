#include<stdio.h>

int main(){
    int value1=0;
    int value2=0;
    int result=0;
    int status=0;
    printf("Enter two numbers: ");
    status= scanf("%d %d", &value1, &value2);
    printf("The status returned by scanf is %d.\n",status);
    printf("You entered the number %d.\n",value1);
    printf("value1 plus value2 is %d.\n",value1+value2);
    printf("value1 minus value2 is %d.\n",value1-value2);
    printf("value1 times value2 is %d.\n",value1*+value2);
    printf("value1 divide value2 is %d.\n",value1/value2);
    printf("%d plus %d is %d\n"value1, value2, value1+value2);
    printf("%d plus %d is %d\n"value1, value2, value1-value2)
    printf("%d plus %d is %d\n"value1, value2, value1*value2)
    printf("%d plus %d is %d\n"value1, value2, value1/value2)
    printf("remainer of %d divided by %d is %d\n"value1, value2, value1%value2)
    printf("%d plus %d is %d\n"value1, value2, value1+value2)
    printf("%d plus %d is %d\n"value1, value2, value1+value2)
    return 0;
}



